/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:25:53 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/26 21:25:54 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c) {
    char *lst_one;

    lst_one = 0;
    while(*s) {
        if(*s == (char)c)
            lst_one = (char *)s;
        s++;
    }
if(c == '\0')
    return ((char *)s);
return lst_one;
}