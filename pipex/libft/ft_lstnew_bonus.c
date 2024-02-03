/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:41:29 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/25 16:33:20 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*newlist;

	newlist = (t_list *)malloc(sizeof(struct s_list));
	if (!newlist)
		return (0);
	newlist -> content = content;
	newlist -> next = NULL;
	return (newlist);
}
