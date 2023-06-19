/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:13:32 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/21 21:57:39 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
//#include "libft.h"
#include <unistd.h>
#include <stdlib.h>


int	main (void)
{
	char	*str;
	int i;
	i =ft_firstnum(0, 0, "holaaaa", "hwlert") + ft_lastnum(0, 0, "holaaaa", "hwlert");
	printf("%i", i);
/*
	str = strnstr("hola muy buenas a todos", "", 8);
	printf("%s", str);
	return (0);
	*/
}
