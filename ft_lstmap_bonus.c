/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:53:50 by acennadi          #+#    #+#             */
/*   Updated: 2024/11/07 15:22:06 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*t_remove(void *content, void (*del)(void *), t_list *new_list)
{
	del(content);
	ft_lstclear(&new_list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*ptr;

	new_list = NULL;
	ptr = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		ptr = f(lst->content);
		new_node = ft_lstnew(ptr);
		if (!new_node)
			return (t_remove(ptr, del, new_list));
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
