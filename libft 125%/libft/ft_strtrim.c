/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:35:23 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/26 14:07:33 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strstrchr(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	int		i;

	i = 0;
	if (!s1)
		return (0);
	size = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strstrchr(s1[i], set) == 1)
		i++;
	while (ft_strstrchr(s1[size - 1], set) == 1)
		size--;
	return (ft_substr(s1, i, size - i));
}
/*
int	main (void)
{
	char	*str;

	str = ft_strtrim("    ", " ");
	printf("%s\n",str);
	return (0);
}
*/