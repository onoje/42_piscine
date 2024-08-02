/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:05:42 by elduran           #+#    #+#             */
/*   Updated: 2024/07/10 19:05:44 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	change;

	x = 0;
	while (x < (size / 2))
	{
		change = tab[x];
		tab[x] = tab[size - x - 1];
		tab[size - x - 1] = change;
		x++;
	}
}
