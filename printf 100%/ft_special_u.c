/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 20:02:00 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/05/12 21:18:22 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countdig(unsigned int num, int neg, int i)
{
	if (neg == 1)
		i++;
	if (num >= 10)
		return (ft_countdig(num / 10, 0, i + 1));
	return (i);
}

static int	ft_exp(int x, int y)
{
	int	i;

	i = x;
	if (y == 0)
		return (1);
	while (y > 1)
	{
		x = i * x;
		y--;
	}
	return (x);
}

int	ft_special_u(unsigned int n)
{
	int		size;
	int		print;
	int		i;

	size = ft_countdig(n, 0, 1);
	i = 0;
	while (size > 0)
	{
		size--;
		print = ((n / ft_exp(10, size)) % 10) + '0';
		write(1, &print, 1);
		i++;
	}
	return (i);
}
/*
int	main (void)
{
	int	a;

	a = ft_special_u(0);
	printf("\n%i", a);
	return (0);
}
*/