/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:35:42 by acennadi          #+#    #+#             */
/*   Updated: 2024/11/04 18:09:10 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlenv3(const char *s, char set)
{
	int	count;

	count = 0;
	while (*s != set && *s++)
	{
		count++;
	}
	return (count);
}

static int	count_word(const char *s, char c)
{
	int	count;
	int	flag;

	flag = 0;
	count = 0;
	while (*s)
	{
		if (*s == c)
		{
			flag = 0;
		}
		else
		{
			if (flag == 0)
			{
				count++;
				flag = 1;
			}
		}
		s++;
	}
	return (count);
}

static char	**clean(char **arr, int i)
{
	while (i > 0)
		free(arr[i--]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		worlds;

	if (!s)
		return (NULL);
	i = 0;
	worlds = count_word(s, c);
	arr = malloc(sizeof(char *) * (worlds + 1));
	if (!arr)
		return (NULL);
	while (i < worlds)
	{
		while (*s == c)
			s++;
		arr[i] = malloc(ft_strlenv3(s, c) + 1);
		if (!arr[i])
			return (clean(arr, i));
		ft_strlcpy(arr[i], s, ft_strlenv3(s, c) + 1);
		s += ft_strlenv3(s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
