/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_pushswap.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:57:46 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/07/17 16:31:53 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PUSHSWAP_H

# define LIBFT_PUSHSWAP_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_array_order(int **stacka, int argc);
int		ft_no_rep(int **stacka, int argc);
int		ft_atoi(const char *str);
int		ft_only_num(char *str);
void	ft_solve(int **stacka, int **stackb, int numstacka, int numstackb);
void	ft_ini_array(int **stacka, int argc, int i);
char	**ft_split(char const *s, int *argc);
void	ft_free_all(char **str2);
#endif