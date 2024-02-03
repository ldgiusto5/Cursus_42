/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:22:48 by ldi-gius          #+#    #+#             */
/*   Updated: 2024/02/02 18:29:56 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_error_permission_dinied(void)
{
	ft_putstr_fd("zsh: permission denied: \n", 2);
	exit(EXIT_FAILURE);
}

void	ft_program_error(void)
{
	ft_putstr_fd("Error en los argumentos de la función \n", 2);
	ft_putstr_fd("Ejemplo: ./pipex <file1> <cmd1> <cmd2> <file2>\n", 2);
	exit(EXIT_FAILURE);
}

void	ft_comand_error(char *str)
{
	ft_putstr_fd("zsh: command not found: ", 2);
	ft_putstr_fd(str, 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_FAILURE);
}
