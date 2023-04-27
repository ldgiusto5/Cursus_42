/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:53:51 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/24 17:38:36 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*l1;
	unsigned char	*l2;

	i = 0;
	l1 = (unsigned char *) s1;
	l2 = (unsigned char *) s2;
	if (!s1 && !s2)
		return (s1);
	while (n > 0)
	{
		l1[i] = l2[i];
		i++;
		n--;
	}
	return (s1);
}
/*
int main (void)
{
	char	*str1;
//	char	*str2;

	ft_memcpy(str1,"123456",2);
	printf("%s",str1);
	return (0);
}
*/