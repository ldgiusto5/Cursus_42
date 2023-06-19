/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:47:01 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/05/25 13:51:59 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char	*ft_get_real_line(char *buffer)
{
	size_t	i;
	char	*line;

	i = 0;
	while (buffer[i] != 0 && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		line = (char *)malloc(sizeof(char) * (i + 2));
	else
		line = (char *)malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] != '\n' && buffer[i] != 0)
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	line[i] = 0;
	return (line);
}

char	*ft_get_new_buffer(char *buffer)
{
	char	*newbuffer;
	size_t	i;
	size_t	j;

	i = 0;
	while (buffer[i] != 0 && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	newbuffer = (char *)malloc(sizeof(char) * (ft_strlen(buffer) - i));
	if (!newbuffer)
		return (NULL);
	j = 0;
	i++;
	while (buffer[i] != 0)
		newbuffer[j++] = buffer[i++];
	newbuffer[j] = 0;
	free (buffer);
	return (newbuffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer[1024];
	char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = ft_read(buffer[fd], fd);
	if (!buffer[fd])
		return (NULL);
	str = ft_get_real_line(buffer[fd]);
	buffer[fd] = ft_get_new_buffer(buffer[fd]);
	return (str);
}
