/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:53:05 by acennadi          #+#    #+#             */
/*   Updated: 2024/11/04 17:58:03 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numlenth(int i)
{
	int	count;

	count = 0;
	if (i == 0)
		return (1);
	if (i < 0)
	{
		i = -i;
		count = 1;
	}
	while (i)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_buffer(char *str, int len, int n)
{
	int	sign;

	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	str[len] = '\0';
	if (n == 0)
		str[--len] = '0';
	while (n)
	{
		str[--len] = (n % 10) + 48;
		n /= 10;
	}
	if (sign)
		str[--len] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = numlenth(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	return (ft_buffer(str, len, n));
}
