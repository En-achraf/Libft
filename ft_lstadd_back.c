#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		if (*lst == NULL)
		{
			*lst = new;
		}
		else
		{
			t_list *ptr;

			ptr = ft_lstlast(*lst);
			ptr->next = new;
		}
	}
}