#include "libft.h"

void bzero(void *s, size_t n) {

	unsigned char *ptr;

	ptr = (unsigned char *)s;
	while(n > 0) {
		*ptr++ = 0;
		n--;
	}
}