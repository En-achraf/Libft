#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr;

	if (lst && new)
	{
		if (*lst == NULL)
		{
			*lst = new;
		}
		else
		{
			ptr = ft_lstlast(*lst);
			ptr->next = new;
		}
	}
}