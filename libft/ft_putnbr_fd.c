/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:17:56 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/24 20:52:33 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	ft_putnbr_fd(int n, int fd)
{
	int		size;
	int		print;

	if (n == -2147483648)
	{
		write(fd, "-214748364", 10);
		n = 8;
	}
	else if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	size = ft_countdig(n, 0, 1);
	while (size > 0)
	{
		size--;
		print = ((n / ft_exp(10, size)) % 10) + '0';
		ft_putchar_fd(print, fd);
	}
}
