#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*test1;
	t_list	*test2;
	t_list	*test3;
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 0;
	c = 0;
	test1 = ft_lstnew(&a);
	test2 = ft_lstnew(&b);
	test3 = ft_lstnew(&c);
	test1->next = test2;
	test2->next = NULL;
	ft_lstadd_front(&test1, test3);
	while (test1)
	{
		printf("a : %p -> \n", &test1);
		printf("b : %p -> \n", (int *)&test1->content);
		test1 = test1->next;
	}
	printf("NULL");
	return (0);
}
