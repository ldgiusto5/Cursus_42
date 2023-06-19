/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:47:41 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/06/06 12:18:43 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_specialchar(va_list special, char c)
{
	if (c == 'c')
		return (ft_special_c(va_arg(special, int)));
	if (c == 's')
		return (ft_special_s(va_arg(special, char *)));
	if (c == 'p')
		return (ft_special_p(va_arg(special, unsigned long int)));
	if (c == 'd' || c == 'i')
		return (ft_special_di(va_arg(special, int)));
	if (c == 'u')
		return (ft_special_u(va_arg(special, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_special_xx(c, va_arg(special, unsigned int)));
	if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	lst;
	int		i;
	int		bits;

	i = 0;
	bits = 0;
	va_start(lst, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			bits++;
		}
		else
		{
			bits = bits + ft_specialchar(lst, str[i + 1]);
			i++;
		}
		i++;
	}
	va_end(lst);
	return (bits);
}
/*
int	main(void)
{
	int	a;

	a = ft_printf("abc%cefg%s%%%p\n", 'd', "hij", 123456789);
	printf("%i", a);
	return (0);
}
*/