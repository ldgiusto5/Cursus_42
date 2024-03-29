/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 21:22:22 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/07/17 16:32:24 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_pushswap.h"

static int	ft_countwords(char const *s)
{
	int	i;
	int	count;
	int	b;

	i = 0;
	count = 0;
	b = 0;
	while (s[i] != '\0')
	{
		if (!((int)s[i] >= 9 && (int)s[i] <= 13) && s[i] != ' ')
		{
			if (b == 0)
			{
				count++;
				b = 1;
			}
		}
		else
			b = 0;
		i++;
	}
	return (count);
}

static char	*ft_fill_str(char *str)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != '\0' && !((int)str[i] >= 9
			&& (int)str[i] <= 13) && str[i] != ' ')
		i++;
	word = (char *)malloc(i + 1);
	if (!word)
	{
		free(word);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0' && !((int)str[i] >= 9
			&& (int)str[i] <= 13) && str[i] != ' ')
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

static char	**ft_fill_array(char **str2, char *str, int n)
{
	int	i;

	i = 1;
	while (i < n && *str)
	{
		while (((*str >= 9 && *str <= 13) || *str == ' ') && *str)
			str++;
		str2[i] = ft_fill_str(str);
		if (!str2[i])
		{
			ft_free_all(str2);
			return (NULL);
		}
		i++;
		while (((*str <= 9 || *str >= 13) && *str != ' ') && *str)
			str++;
	}
	str2[i] = 0;
	return (str2);
}

char	**ft_split(char const *s, int *argc)
{
	char	**str2;
	char	*str;
	int		i;

	i = 0;
	str = (char *) s;
	*argc = ft_countwords(str) + 1;
	str2 = (char **)malloc(sizeof(char *) * (*argc + 1));
	if (!str2)
	{
		free(str2);
		return (NULL);
	}
	str2 = ft_fill_array(str2, str, *argc);
	return (str2);
}
/*
int	main (void)
{
	char	**str;
	int	i = 0;
	str = ft_split("\t\t\t\thello!\t\t\t\t", '\t');
	while (i < 2)
	{
		printf("%s\n",str[i]);
		i++;
	}
	//	printf("%i\n",n);
	return (0);
}
*/