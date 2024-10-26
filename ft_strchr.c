/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:25:45 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/26 21:25:46 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c) {
    while(*s) {
        if(*s == (char)c)
            return ((char *)s);
        s++;
    }
if(c == '\0')
    return ((char *)s);
return 0;
}