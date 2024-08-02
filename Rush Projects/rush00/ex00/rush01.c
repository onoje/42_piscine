/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:24:07 by elduran           #+#    #+#             */
/*   Updated: 2024/07/09 11:24:13 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	order(int x, char first, char middle, char last)
{
	int	column_control;

	column_control = 1;
	while (column_control <= x)
	{
		if (column_control == 1)
			ft_putchar(first);
		else if (column_control == x)
			ft_putchar(last);
		else
			ft_putchar(middle);
		column_control++;
	}
}

void	rush(int x, int y)
{
	int	line_control;

	line_control = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR", 5);
		return ;
	}
	while (line_control <= y)
	{
		if (line_control == 1)
			order (x, '/', '*', '\\');
		else if (line_control == y)
			order (x, '\\', '*', '/');
		else
			order (x, '*', ' ', '*' );
		line_control++;
		write(1, "\n", 1);
	}
}
