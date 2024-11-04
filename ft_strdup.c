/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:05:37 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/28 21:05:44 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    int i;
    char *str;

    if(!(str = malloc(ft_strlen(s1) + 1)))
        return NULL;
    i = 0;
    while(s1[i]) {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}