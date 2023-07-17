/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:47:41 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/07/17 13:30:12 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_pushswap.h"

static int	ft_pos_not_ordered(int **stacka, int argc)
{
	int	i;

	i = 0;
	while (i < argc -1)
	{
		if (stacka[i][1] == -42)
			return (i);
		i++;
	}
	return (-1);
}

static void	ft_order(int **stacka, int argc, int j, int i)
{
	int	num;
	int	pos;

	pos = ft_pos_not_ordered(stacka, argc);
	if (pos == -1)
		return ;
	num = stacka[pos][0];
	while (i < argc - 1)
	{
		if (num > stacka[i][0] && stacka[i][1] == -42)
		{
			num = stacka[i][0];
			pos = i;
		}
		i++;
	}
	if (stacka[pos][1] == -42)
	{
		stacka[pos][1] = j;
		ft_order (stacka, argc, j + 1, 0);
	}
}

void	ft_array_order(int **stacka, int argc)
{
	ft_ini_array(stacka, argc, 0);
	ft_order(stacka, argc, 0, 0);
	return ;
}
