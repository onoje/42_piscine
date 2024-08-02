/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:14:34 by elduran           #+#    #+#             */
/*   Updated: 2024/07/15 14:14:37 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
	{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x])
	{
		if (!(str[x] >= 32 && str[x] <= 126))
		{
			return (0);
		}
		else
		{
			x++;
		}
	}
	return (1);
}