/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:25:41 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/28 20:54:48 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len) {
    unsigned char *dt;
    const unsigned char *sr;

    dt = (unsigned char *)dst;
    sr = (const unsigned char *)src;
    if (sr < dt) {
        while (len > 0) {
            len--;
            dt[len] = sr[len];
        }
    } else if (sr > dt) {
        ft_memcpy(dt, sr, len);
    }
    return dst;
}