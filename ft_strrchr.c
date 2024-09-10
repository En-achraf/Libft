#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char *X;

	i = 0;
	X = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			X = (char *)&s[i];
		i++;
	}

	if (c == '\0')
		return ((char *)&s[i]);

	return (X);
}