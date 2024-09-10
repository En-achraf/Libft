#include "libft.h"

static int	len(const char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j;

	if (!s1 || !s2)
		return (NULL);

	str = malloc(len(s1) + len(s2) + 1);

	if (!str)
		return (NULL);

	i = 0;

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;

	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	str[i] = '\0';

	return (str);
}