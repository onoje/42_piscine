/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:51:44 by elduran           #+#    #+#             */
/*   Updated: 2024/07/15 15:51:46 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (flag == 0)
			{
				str[i] = str[i] - 32;
				flag = 1;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			flag = 1;
		else
			flag = 0;
		i++;
	}
	return (str);
}