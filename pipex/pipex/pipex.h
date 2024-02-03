/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:58:45 by ldi-gius          #+#    #+#             */
/*   Updated: 2024/02/02 18:31:03 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "libft.h"
# include "pipex.h"
# define WRITEPIPE 1
# define READPIPE 0

void	ft_error_permission_dinied(void);
void	ft_program_error(void);
void	ft_comand_error(char *str);
void	ft_file_error(char *str);
int		ft_only_spaces(char *str);
void	ft_free_all(char **str2);

#endif