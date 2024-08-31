#include "libft.h"

void *calloc(size_t nitems, size_t size) {
	void *res;
	size_t i;

	res = malloc(size * nitems);

	if(!res)
		return NULL;

	i = 0;
	while(i < (size * nitems)) {
		((unsigned char*)res)[i] = 0;
		i++;
	}

	return res;
}