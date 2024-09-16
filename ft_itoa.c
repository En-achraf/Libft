#include "libft.h"

static int	numlen(int n)
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

static void	ft_fill(char *str, int len, int sign, int n)
{
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
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*str;
	int		len;

	len = numlen(n);
	str = malloc(sizeof(char) * (len + 1));
	sign = 0;
	if (!str)
		return (NULL);
	ft_fill(str, len, sign, n);
	return (str);
}
