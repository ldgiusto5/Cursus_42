/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:48:16 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/21 19:37:22 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*array;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	array = malloc(i * sizeof(char) + 1);
	if (!array)
		return (0);
	while (i >= 0)
	{
		array[i] = s[i];
		i--;
	}
	return (array);
}
