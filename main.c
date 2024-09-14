#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*noderendom;
	t_list	*a;
	t_list *b;

	node1 = ft_lstnew("node1");
	node2 = ft_lstnew("node2");
	node3 = ft_lstnew("node3");

	noderendom = ft_lstnew("noderendom");
	node1->next = node2;
	node2->next = node3;
	node3->next = noderendom;
	a = ft_lstadd_back(node1, b);
	printf("the next node is : %s", (char *)a->content);
	return (0);
}
