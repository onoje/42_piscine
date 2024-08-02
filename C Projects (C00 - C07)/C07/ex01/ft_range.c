/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:58:47 by elduran           #+#    #+#             */
/*   Updated: 2024/07/21 11:58:49 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	size;
	int	*range;

	if (min >= max)
	{
		return (NULL);
	}
	x = 0;
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
	{
		return (NULL);
	}
	while (x < size)
	{
		range[x] = min + x;
		x++;
	}
	return (range);
}
