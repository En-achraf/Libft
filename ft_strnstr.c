#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	big_str;
	size_t	part_str;

	if (needle[0] == '\0')
		return ((char *)haystack);
	big_str = 0;
	while (haystack[big_str] && len > big_str)
	{
		part_str = 0;
		while (needle[part_str])
		{
			if (haystack[big_str + part_str] != needle[part_str])
				break ;
			part_str++;
		}
		if (needle[part_str] == '\0')
			return ((char *)&haystack[big_str]);
		big_str++;
	}
	return (0);
}
