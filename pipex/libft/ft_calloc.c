/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:22:52 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/26 14:12:07 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*array;
	size_t	i;

	i = 0;
	array = malloc(count * size);
	if (array)
	{
		while (count * size > i)
		{
			array[i] = '\0';
			i++;
		}
	}
	return (array);
}
