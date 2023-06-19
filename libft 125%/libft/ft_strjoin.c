/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:17:04 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/21 19:37:18 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		size;
	char	*array;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	array = (char *)malloc(size * sizeof(char) + 1);
	if (!array)
		return (0);
	else
	{
		while (s1[i] != '\0')
		{
			array[i] = s1[i];
			i++;
		}
		while (i < size)
		{
			array[i] = s2[i - ft_strlen(s1)];
			i++;
		}
		array[i] = '\0';
	}
	return (array);
}
/*
int main (void)
{
	char	*str;

	str = ft_strjoin("hola ","que pasa");
	printf("%s\n",str);
	return (0);
}
*/