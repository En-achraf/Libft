/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:03:38 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/27 13:45:20 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size) {
    void *ptr;

    ptr = malloc(count * size);
    if(!ptr) 
        return (NULL);
    ft_bzero(ptr, count * size);
    return ptr;
}
