/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:25:43 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/26 21:25:44 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t len) {
    unsigned char *s1;

    s1 = (unsigned char *)str;
    while(len-- > 0) {
        *s1 = (unsigned char)c;
        s1++;
    }
    return (str);
}

