/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:13:11 by elduran           #+#    #+#             */
/*   Updated: 2024/07/10 14:13:14 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divide;
	int	resume;

	divide = *a / *b;
	resume = *a % *b;
	*a = divide;
	*b = resume;
}
