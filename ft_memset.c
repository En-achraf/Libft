#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char X;

	ptr = (unsigned char *)s;
	X = (unsigned char)c;
	while (n > 0)
	{
		*ptr++ = X;
		n--;
	}

	return (s);
}