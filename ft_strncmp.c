#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
	size_t i;

	i = 0;
	while((s1[i] || s2[i]) && (n > i)) {
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}