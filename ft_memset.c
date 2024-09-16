#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	x;

	ptr = (unsigned char *)s;
	x = (unsigned char)c;
	while (n > 0)
	{
		*ptr++ = x;
		n--;
	}
	return (s);
}
