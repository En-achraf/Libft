#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *str;
	int len;

	if (!s || !f)
		return (NULL);

	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));

	if (!str)
		return (NULL);

	i = 0;

	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}

	str[i] = '\0';

	return (str);
}