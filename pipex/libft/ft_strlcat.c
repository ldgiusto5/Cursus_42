/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:23:15 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/21 19:37:10 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	i = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (lendest >= size)
		return (lensrc + size);
	else
	{
		while (src[i] != '\0' && (lendest + i) < size - 1)
		{
			dest[lendest + i] = src[i];
			i++;
		}
		dest[lendest + i] = '\0';
	}
	return (lendest + lensrc);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[100] = "hola ";
	char	a[100] = "hola ";
	char	src[100] = "42, como te va?";

	printf("%i\n", ft_strlcat(dest, src, 1));
	printf("%s\n", dest);
	printf("%lu\n", strlcat(a, src, 1));
	printf("%s\n", a);
	return (0);
}
*/