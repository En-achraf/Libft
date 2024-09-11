#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	while (dest[i] && i < size)
		i++;
	dest_len = i;
	src_len = ft_strlen(src);
	j = 0;
	if (dest_len < size)
	{
		while (src[j] && (dest_len + j) < (size - 1))
		{
			dest[dest_len + j] = src[j];
			j++;
		}
		dest[dest_len + j] = '\0';
	}
	return (dest_len < size ? dest_len + src_len : size + src_len);
}
