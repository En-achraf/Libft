#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t size) {
	const char *s2;
	size_t s2len;
	size_t i;

	s2len = 0;
	s2 = src;
	while(*s2++)
		s2len++;

	if(size > 0) {
		i = 0;
		while((size - 1) > i && src[i]) {
			dest[i] = src[i];
			i++;
		}

		dest[i] = '\0';
	}

	return s2len;
}