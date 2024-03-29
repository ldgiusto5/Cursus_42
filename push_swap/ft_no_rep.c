/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_rep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:23:47 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/07/17 10:48:31 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_no_rep(int **stacka, int argc)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (stacka[i][0] == stacka[j][0])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}