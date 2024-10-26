/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:26:39 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/26 21:26:40 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c) {
    if(c >= 0 && c <= 127)
        return (1);
    return (0);
}