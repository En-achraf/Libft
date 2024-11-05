/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:28:09 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/26 21:28:10 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dest;

	src = (unsigned char *)s2;
	dest = (unsigned char *)s1;
	i = 0;
	while ((dest[i] || src[i]) && n > i)
	{
		if (dest[i] != src[i])
			return (dest[i] - src[i]);
		i++;
	}
	return (0);
}
