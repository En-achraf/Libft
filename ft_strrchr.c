#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*x;

	i = 0;
	x = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			x = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (x);
}
