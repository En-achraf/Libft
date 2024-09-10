#include "libft.h"

void	*calloc(size_t nitems, size_t size)
{
	void *res;

	res = malloc(size * nitems);

	if (!res)
		return (NULL);

	ft_bzero(res, size * nitems);

	return (res);
}