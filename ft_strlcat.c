/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:25:47 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/28 10:18:36 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t src_len;
    size_t dst_len;
    size_t i;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    i = 0;
    if(dstsize <= dst_len)
        return (src_len + dstsize);
    while(src[i] && (i + dst_len) < (dstsize - 1))
     {
        dst[i + dst_len] = src[i];
        i++;
     }
    dst[i + dst_len] = '\0';
    return (src_len + dst_len);
}