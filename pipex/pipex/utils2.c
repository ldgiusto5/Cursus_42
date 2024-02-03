/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:25:22 by ldi-gius          #+#    #+#             */
/*   Updated: 2024/02/02 18:35:25 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_file_error(char *str)
{
	ft_putstr_fd("zsh: no such file or directory: ", 2);
	ft_putstr_fd(str, 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_FAILURE);
}

int	ft_only_spaces(char *str)
{
	unsigned long	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (strlen(str) == i && i != 0)
		return (0);
	return (1);
}

void	ft_free_all(char **str2)
{
	int	i;

	i = 0;
	while (str2[i] != NULL)
	{
		free(str2[i]);
		i++;
	}
	free(str2);
}
