/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:25:30 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/26 21:25:31 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
    unsigned char *str;

    str = (unsigned char *)s;
    while (n > 0) {
        if(*str == (unsigned char)c)
            return (void *)str;
        str++;
        n--;
    }
    return NULL;
}