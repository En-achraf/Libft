#include "libft.h"

void *ft_memset(void *s, int c, size_t n) {
	size_t i;
	unsigned char *ptr
	unsigned char X 

	ptr = (unsigned char *)s;
	X = (unsigned char)c;
	i = 0;
	while(n > 0) {
		*ptr++ = X;
		n--;
	}

	return s;
}