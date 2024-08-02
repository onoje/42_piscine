/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:22:12 by elduran           #+#    #+#             */
/*   Updated: 2024/07/19 20:22:14 by elduran          ###   ########.tr       */
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

	i = 1;
	while (arg_count > i)
	{
		ft_putstr(arg_vector[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
