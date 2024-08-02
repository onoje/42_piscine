/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:13:55 by elduran           #+#    #+#             */
/*   Updated: 2024/07/18 11:13:57 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n)
{
	int	i;

	if (n <= 1)
	{
		return (0);
	}
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	while (1)
	{
		nb++;
		if (ft_is_prime(nb))
		{
			return (nb);
		}
	}
}
