/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:33:07 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/05/12 21:18:29 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa(long unsigned int p, int num, int i)
{
	char	*base;

	base = "0123456789abcdef";
	if (num > 0)
	{
		if (p > 15)
			i = ft_hexa(p / 16, num - 1, i + 1);
		write(1, &base[p % 16], 1);
	}
	return (i);
}

int	ft_special_p(long unsigned int p)
{
	write(1, "0x", 2);
	return (ft_hexa(p, 16, 1) + 2);
}

/*
int	main (void)
{
	int	a;

	a = ft_special_p('\0');
	printf("\n%i", a);
	return (0);
}
*/