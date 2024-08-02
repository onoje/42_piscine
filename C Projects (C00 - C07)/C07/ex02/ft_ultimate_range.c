/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:55:05 by elduran           #+#    #+#             */
/*   Updated: 2024/07/21 12:55:07 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x;
	int	size;
	int	*temp;

	x = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	temp = (int *)malloc(sizeof(int) * size);
	if (temp == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = temp;
	while (size > x)
	{
		temp[x] = min + x;
		x++;
	}
	return (size);
}
