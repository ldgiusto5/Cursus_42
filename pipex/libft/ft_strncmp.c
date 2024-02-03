/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:27:07 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/19 16:41:40 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[20] = "12345678-1";
	char	s2[20] = "1237775678-11";

	printf("%i\n",ft_strncmp(s1,s2,8));
	printf("%i\n",strncmp(s1,s2,8));
	return (0);
}
*/