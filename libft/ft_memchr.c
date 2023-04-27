/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:54:10 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/21 19:37:54 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (n == 0)
		return (0);
	while (str[i] != (char)c && i < n - 1)
		i++;
	if (i > n - 1)
		return (0);
	if (str[i] == (char)c)
		return ((char *)s + i);
	else
		return (0);
}
