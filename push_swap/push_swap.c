/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:14:12 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/07/17 16:39:45 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft_pushswap.h"
int	main (int argc, char **argv)
{
	int i;
	int **stacka;
	int **stackb;
	int	*pargc;
	int	flag_free;

	i = 1;
	pargc = &argc;
	flag_free = 0;
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		argv = ft_split(argv[1], pargc);
		flag_free = 1;
	}
	while (i < argc)
	{
		if (ft_only_num(argv[i]) == 0)
			return (printf("ERROR\n"),0);
		i++;
	}
	i = 1;
	stacka = (int **)malloc((argc - 1) * sizeof(int *));
	stackb = (int **)malloc((argc - 1) * sizeof(int *));
	while (i < argc && stacka)
	{
		stacka[i - 1] = (int *)malloc(2 * sizeof(int));
		stackb[i - 1] = (int *)malloc(2 * sizeof(int));
		stacka[i - 1][0] = ft_atoi(argv[i]);
		i++;
	}
	if (ft_no_rep(stacka, argc) == 0 || !stacka || !stackb)
		return (printf("ERROR\n"),0);
	if (flag_free == 1)
		ft_free_all(argv);
	i = 0;
	ft_array_order(stacka, argc);
	ft_ini_array(stackb, argc, 0);
	printf("Stack a     Order     Stack b     Order\n  ---        ---        ---        ---\n");
	while (i < argc - 1)
	{
		printf("   %-11i%-11i%-10i%-10i\n", stacka[i][0], stacka[i][1], stackb[i][0], stackb[i][1]);
		i++;
	}
	ft_solve (stacka, stackb, argc - 1, 0);
	i = 0;
	printf("Stack a     Order     Stack b     Order\n  ---        ---        ---        ---\n");
	while (i < argc - 1)
	{
		printf("   %-11i%-11i%-10i%-10i\n", stacka[i][0], stacka[i][1], stackb[i][0], stackb[i][1]);
		i++;
	}
	return (0);
}

