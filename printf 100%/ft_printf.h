/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:43:09 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/05/12 21:18:00 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_special_c(int c);
int		ft_special_s(char *str);
int		ft_special_p(long unsigned int p);
int		ft_special_di(int n);
int		ft_special_u(unsigned int n);
int		ft_special_xx(char c, unsigned int n);
char	*ft_itoa(int n);

#endif