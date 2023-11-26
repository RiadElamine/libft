/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:55:10 by relamine          #+#    #+#             */
/*   Updated: 2023/11/26 06:05:45 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*current;

	if (!lst || !del || !f)
		return (NULL);
	current = NULL;
	while (lst)
	{
		newnode = ft_lstnew(NULL);
		if (!newnode)
		{
			del(newnode);
			ft_lstclear(&current, del);
			return (NULL);
		}
		newnode->content = f(lst->content);
		ft_lstadd_back(&current, newnode);
		lst = lst->next;
	}
	return (current);
}
