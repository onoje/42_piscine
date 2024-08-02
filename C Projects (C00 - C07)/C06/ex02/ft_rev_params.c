/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:30:50 by elduran           #+#    #+#             */
/*   Updated: 2024/07/19 20:30:55 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int arg_count, char **arg_vector)
{
	int	i;

	i = arg_count - 1;
	while (i > 0)
	{
		ft_putstr(arg_vector[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
