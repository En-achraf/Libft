/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:56:14 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/27 09:55:29 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t (j), (i);
  
    if (needle[0] == '\0')
        return ((char *)haystack);
    i = 0;
    while(haystack[i] && i < len) {
        j = 0;
        while(needle[j] != '\0' && (i + j) < len) {
            if(needle[j] != haystack[i + j])
                break;
            j++;
        }
        if(needle[j] == '\0')
            return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);
}