#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*ptr;

	new_list = NULL;
	ptr = lst;
	while (ptr)
	{
		new_node = ft_lstnew(f(ptr->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->next = new_list;
		new_list = new_node;
		ptr = ptr->next;
	}
	return (new_list);
}
