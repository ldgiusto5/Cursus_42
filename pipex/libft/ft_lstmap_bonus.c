/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:39:06 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/05/03 16:45:27 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listans;
	t_list	*first;

	if (!lst)
		return (0);
	listans = (t_list *)malloc(sizeof(t_list));
	if (!listans)
		return (0);
	listans -> content = f(lst -> content);
	first = listans;
	while (lst->next != NULL)
	{
		lst = lst -> next;
		listans -> next = malloc(sizeof(t_list));
		if (!listans->next)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		listans = listans -> next;
		listans -> content = f(lst -> content);
	}
	listans -> next = NULL;
	return (first);
}
