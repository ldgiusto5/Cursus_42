/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special_di.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:34:48 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/05/12 21:18:32 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_special_di(int n)
{
	int		i;
	char	*str;

	str = ft_itoa(n);
	i = ft_special_s(str);
	free(str);
	return (i);
}

/*
int	main (void)
{
	int	a;

	a = ft_special_di(0);
	printf("\n%i", a);
	return (0);
}
*/