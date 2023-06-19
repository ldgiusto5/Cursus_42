/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:47:05 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/05/25 13:47:26 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

size_t	ft_strchr_i(char *s, char c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (i);
	else
		return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *buffer, char *buffreader)
{
	size_t	i;
	size_t	j;
	char	*array;

	i = -1;
	j = 0;
	if (!buffer)
	{
		buffer = (char *)malloc(sizeof(char));
		buffer[0] = 0;
	}
	if (!buffer || !buffreader)
		return (NULL);
	array = malloc((ft_strlen(buffer) + ft_strlen(buffreader) + 1) * 1);
	if (!array)
		return (NULL);
	if (buffer)
		while (buffer[++i] != 0)
			array[i] = buffer[i];
	while (buffreader[j])
		array[i++] = buffreader[j++];
	array[ft_strlen(buffer) + ft_strlen(buffreader)] = 0;
	free(buffer);
	return (array);
}

char	*ft_read(char *buffer, int fd)
{
	char	*buffreader;
	int		readed;

	buffreader = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffreader)
		return (0);
	readed = 1;
	while (readed != 0 && !ft_strchr_i(buffer, '\n'))
	{
		readed = read(fd, buffreader, BUFFER_SIZE);
		if (readed == -1)
		{
			free(buffreader);
			free(buffer);
			return (0);
		}
		buffreader[readed] = 0;
		buffer = ft_strjoin(buffer, buffreader);
		if (buffer[0] == '\0')
			return (free(buffer), free(buffreader), NULL);
	}
	free(buffreader);
	return (buffer);
}
