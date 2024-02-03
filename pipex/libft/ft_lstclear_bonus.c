/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:52:38 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/04/25 19:04:06 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nextlist;

	while (*lst != NULL)
	{
		nextlist = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = nextlist;
	}
}
