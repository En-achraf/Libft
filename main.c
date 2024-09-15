#include "libft.h"
#include <stdio.h>

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL");
}

int	main(void)
{
	t_list *head = ft_lstnew("1");
	t_list *second = ft_lstnew("2");
	t_list *third = ft_lstnew("3");

	ft_lstadd_back(&head, second);
	ft_lstadd_back(&head, third);

	t_list *new_node = ft_lstnew("4");
	ft_lstadd_back(&head, new_node);

	print_list(head);

	return (0);
}