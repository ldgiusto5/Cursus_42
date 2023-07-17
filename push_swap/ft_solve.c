/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:33:41 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/07/17 16:22:52 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_pushswap.h"

int	ft_check(int **stacka, int numstacka)
{
	int i = 0;
	while (i < numstacka - 1)
	{
		if (stacka[i][1] > stacka[i + 1][1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_ra(int **stacka, int numstacka)
{
	int	*aux;
	int i = 0;
	
	write(1,"ra\n",3);
	aux = stacka[0];
	while (i < numstacka - 1)
	{
		stacka[i] = stacka[i + 1];
		i++;
	}
	stacka[i] = aux;
}

void	ft_rra(int **stacka, int numstacka)
{
	int	*aux;
	
	write(1,"rra\n",3);
	aux = stacka[numstacka - 1];
	while (numstacka > 1)
	{
		stacka[numstacka - 1] = stacka[numstacka - 2];
		numstacka--;
	}
	stacka[0] = aux;
}

void	ft_sa(int **stacka)
{
	int	*aux;

	write(1,"sa\n",3);
	aux = stacka[0];
	stacka[0] = stacka[1];
	stacka[1] = aux;
}

void	ft_pb(int **stacka, int **stackb, int *pnuma, int *pnumb)
{
	int	*aux;
	int i = 0;
	int numstackb;

	numstackb = *pnumb;
	write(1,"pb\n",3);
	while (0 < numstackb)
	{
		stackb[numstackb] = stackb[numstackb - 1];
		numstackb--;
	}
	stackb[0] = stacka[0];
	aux = stacka[0];
	while (i < *pnuma - 1)
	{
		stacka[i] = stacka[i + 1];
		i++;
	}
	stacka[i] = aux;
	*pnuma = *pnuma - 1;
	*pnumb = *pnumb + 1;
}

void	ft_pa(int **stacka, int **stackb, int *pnuma, int *pnumb)
{
	int	*aux;
	int i = 0;
	int numstacka;

	numstacka = *pnuma;
	write(1,"pb\n",3);
	while (0 < numstacka)
	{
		stacka[numstacka] = stacka[numstacka - 1];
		numstacka--;
	}
	stacka[0] = stackb[0];
	aux = stackb[0];
	while (i < *pnumb - 1)
	{
		stackb[i] = stackb[i + 1];
		i++;
	}
	stackb[i] = aux;
	*pnumb = *pnumb - 1;
	*pnuma = *pnuma + 1;
}

void	ft_solve(int **stacka, int **stackb, int numstacka, int numstackb)
{
	// ft_ra(stacka, numstacka);
	// ft_sa(stacka);
	// ft_rra(stacka, numstacka);
	// int *pnuma;
	// int	*pnumb;

	// pnuma = &numstacka;
	// pnumb = &numstackb;
	// ft_pb(stacka, stackb, pnuma, pnumb);
	// ft_rra(stacka, numstacka);
	// ft_pb(stacka, stackb, pnuma, pnumb);
	// ft_rra(stacka, numstacka);
	// ft_rra(stacka, numstacka);
//	ft_pb(stacka, stackb, numstacka, numstackb);
	(void) numstackb;
	(void) stackb;
	// int i = 0;
	while(1)
	{
		if (stacka[0][1] == numstacka - 1 && stacka[1][1] == 0)
			ft_ra(stacka, numstacka);
		if (stacka[0][1] > stacka[1][1])
			ft_sa(stacka);
		if (stacka[0][1] == 0)
		{
			if(ft_check(stacka, numstacka) == 1)
				return ;
		}
		if (stacka[0][1] < stacka[1][1])
			ft_ra(stacka, numstacka);
	}
}