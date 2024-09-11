#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t src_len;
	size_t i;

	src_len = 0;
	while (src[src_len])
		src_len++;

	if (size > 0)
	{
		i = 0;
		while ((size - 1) > i && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}

	return (src_len);
}