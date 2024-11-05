/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:24:02 by acennadi          #+#    #+#             */
/*   Updated: 2024/11/04 18:00:12 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;

	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (n > 0)
	{
		if (*dest != *src)
			return (*dest - *src);
		dest++;
		src++;
		n--;
	}
	return (0);
}
