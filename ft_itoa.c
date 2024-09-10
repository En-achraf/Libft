#include "libft.h"

static int	NumLen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*str;
	int		len;

	len = NumLen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		return (NULL);
	}
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
	}
	else
	{
		while (n > 0)
		{
			str[--len] = (n % 10) + '0';
			n /= 10;
		}
	}
	if (sign)
	{
		str[0] = '-';
	}
	return (str);
}
