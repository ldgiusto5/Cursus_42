/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:35:30 by ldi-gius          #+#    #+#             */
/*   Updated: 2024/02/02 18:37:48 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_check_path(char *cmd, char **envp)
{
	int		i;
	char	**path;
	char	*comand;

	i = 0;
	while (envp[i] != 0 && ft_strncmp(envp[i], "PATH", 4))
		i++;
	if (envp[i] == 0)
		return (0);
	path = ft_split(envp[i] + 5, ':');
	i = 0;
	while (path[i] != 0)
	{
		path[i] = ft_strjoin(path[i], "/");
		comand = ft_strjoin(path[i], cmd);
		if ((access(comand, F_OK) == 0))
			return (comand);
		i++;
		free(comand);
	}
	return (0);
}

void	fd_commands(char *argv, char **envp)
{
	char	**cmd;
	int		i;
	char	*path;

	if (ft_strlen(argv) == 0)
		ft_error_permission_dinied();
	i = 0;
	cmd = ft_split(argv, ' ');
	path = ft_check_path(cmd[0], envp);
	execve(path, cmd, envp);
	if (!path)
	{
		ft_free_all(cmd);
		free(path);
	}
	ft_comand_error(argv);
}

void	ft_child(char **argv, char **envp, int fd[2])
{
	int	newfd;

	newfd = open(argv[1], O_RDONLY, 0777);
	if (newfd < 0)
		ft_file_error(argv[1]);
	dup2(fd[WRITEPIPE], STDOUT_FILENO);
	dup2(newfd, STDIN_FILENO);
	close(fd[READPIPE]);
	fd_commands(argv[2], envp);
}

void	ft_parent(char **argv, char **envp, int fd[2])
{
	int	newfd;

	newfd = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (newfd < 0)
		ft_program_error();
	dup2(newfd, STDOUT_FILENO);
	dup2(fd[READPIPE], STDIN_FILENO);
	close(fd[WRITEPIPE]);
	fd_commands(argv[3], envp);
}

int	main(int argc, char **argv, char **envp)
{
	int		fd[2];
	pid_t	pid;

	if (argc != 5)
		ft_program_error();
	if (pipe(fd) == -1)
		ft_program_error();
	pid = fork();
	if (pid < 0)
		ft_program_error();
	if (pid == 0 && ft_only_spaces(argv[2]) == 1)
		ft_child(argv, envp, fd);
	else if (pid == 0 && ft_only_spaces(argv[2]) == 0)
		ft_comand_error(argv[2]);
	if (pid != 0 && ft_only_spaces(argv[3]) == 1)
	{
		waitpid(pid, NULL, WUNTRACED);
		ft_parent(argv, envp, fd);
	}
	else if (pid != 0 && ft_only_spaces(argv[3]) == 0)
	{
		waitpid(pid, NULL, WUNTRACED);
		ft_comand_error(argv[3]);
	}
}
