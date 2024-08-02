/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:43:38 by elduran           #+#    #+#             */
/*   Updated: 2024/07/11 11:43:40 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	change;

	while (size > 0)
	{
		x = 0;
		while (x < size -1)
		{
			if (tab[x] > tab[x + 1])
			{
				change = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = change;
			}
			x++;
		}
		size--;
	}
}
