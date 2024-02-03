/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:27:56 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/26 14:10:16 by ldi-gius         ###   ########.fr       */
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

static char	*ft_fill_itoa(char *str, unsigned int n, int neg)
{
	int	max;

	max = ft_countdig(n, neg, 1);
	if (neg == 1)
		str[0] = '-';
	while (max > 1)
	{
		str[max - 1] = n % 10 + '0';
		n = n / 10;
		max--;
	}
	if (neg == 0)
		str[0] = n % 10 + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int					neg;
	char				*str;
	unsigned int		num;

	neg = 0;
	if (n < 0)
	{
		neg = 1;
		num = (unsigned int) -n;
	}
	else
		num = (unsigned int) n;
	str = (char *)malloc((ft_countdig(num, neg, 1) + 1) * sizeof(char));
	if (!str)
	{
		free(str);
		return (0);
	}
	str = ft_fill_itoa(str, num, neg);
	str[ft_countdig(num, neg, 1)] = 0;
	return (str);
}
/*
int main (void)
{
	char	*str;
	
	str = ft_itoa(-2147483648);
	printf("%s", str);
}
*/