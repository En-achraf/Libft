/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:25:38 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/26 21:25:39 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void * ft_memcpy(void *dst, const void *src, size_t n) {
    unsigned char *s1;
    unsigned char *s2;

    if(!dst && !src)
        return (0);
    s1 = (unsigned char *)dst;
    s2 = (unsigned char *)src;
    while(n--) {
        *s1 = *s2;
        s1++;
        s2++;
    }
    return dst;
 }