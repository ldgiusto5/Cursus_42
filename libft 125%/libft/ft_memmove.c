/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:48:21 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/26 13:26:14 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*l1;
	char	*l2;

	i = 0;
	l2 = (char *) str2;
	l1 = (char *) str1;
	if (!str1 && !str2)
		return (str1);
	if (str1 > str2)
	{
		while (n--)
		{
			l1[n] = l2[n];
		}
	}
	else
	{
		while (i < n)
		{
			l1[i] = l2[i];
			i++;
		}
	}
	return (l1);
}
