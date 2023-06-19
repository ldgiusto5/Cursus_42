/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special_xX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 20:06:53 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/05/12 21:18:13 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa(char *base, unsigned int num, int i)
{
	if (num > 15)
		i = ft_hexa(base, num / 16, i + 1);
	write(1, &base[num % 16], 1);
	return (i);
}

int	ft_special_xx(char c, unsigned int n)
{
	char	*base;

	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	return (ft_hexa(base, n, 1));
}

/*
int	main (void)
{
	int	a;

	a = ft_special_xx('x', 123456789);
	printf("\n%i", a);
	return (0);
}
*/