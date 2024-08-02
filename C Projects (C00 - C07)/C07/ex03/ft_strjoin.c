/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:25:20 by elduran           #+#    #+#             */
/*   Updated: 2024/07/21 16:25:22 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_array;
	int		x;
	int		y;
	int		sp;
	int		na;

	new_array = malloc(sizeof(strs) + (sizeof(sep) * (size - 1)));
	x = 0;
	y = 0;
	na = 0;
	while (x < size)
	{
		y = 0;
		while (strs[x][y] != '\0')
			new_array[na++] = strs[x][y++];
		sp = 0;
		while (sep[sp] != '\0' && x != size - 1)
			new_array[na++] = sep[sp++];
		x++;
	}
	new_array[na] = '\0';
	return (new_array);
}
