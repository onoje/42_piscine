/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:38:19 by elduran           #+#    #+#             */
/*   Updated: 2024/07/19 20:38:22 by elduran          ###   ########.tr       */
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

void	ft_swap(char **a, char **b)
{
	char	*x;

	x = *a;
	*a = *b;
	*b = x;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
	{
		x++;
	}
	return (s1[x] - s2[x]);
}

int	main(int arg_count, char **arg_vector)
{
	int	x;
	int	y;

	x = 1;
	while (arg_count > x)
	{
		y = 1;
		while (arg_count - 1 > y)
		{
			if (ft_strcmp(arg_vector[y], arg_vector[y + 1]) > 0)
			{
				ft_swap(&arg_vector[y], &arg_vector[y + 1]);
			}
			y++;
		}
		x++;
	}
	y = 1;
	while (arg_count > y)
	{
		ft_putstr(arg_vector[y]);
		ft_putchar('\n');
		y++;
	}
	return (0);
}
