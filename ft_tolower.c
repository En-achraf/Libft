/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:27:48 by acennadi          #+#    #+#             */
/*   Updated: 2024/10/26 21:27:49 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c) {
    if(c >= 'A' && c <= 'Z')
        return (c + 32);
    return c;
}