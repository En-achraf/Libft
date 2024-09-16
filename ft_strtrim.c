#include "libft.h"

static int	its_set(char const s1, char const *s)
{
	while (*s)
	{
		if (s1 == *s)
		{
			return (1);
		}
		s++;
	}
	return (0);
}

static int	len(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = len(s1);
	while (s1[start] && its_set(s1[start], set))
		start++;
	while (end > start && its_set(s1[end - 1], set))
		end--;
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (end > start)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
