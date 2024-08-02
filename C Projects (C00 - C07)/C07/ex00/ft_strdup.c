/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:44:06 by elduran           #+#    #+#             */
/*   Updated: 2024/07/20 17:44:13 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strdup(char *src)
{
	int		x;
	int		len;
	char	*dub_adr;

	x = 0;
	len = ft_strlen(src);
	dub_adr = (char *)malloc(sizeof(char) * (len + 1));
	if (dub_adr == NULL)
	{
		return (NULL);
	}
	while (x < len)
	{
		dub_adr[x] = src[x];
		x++;
	}
	dub_adr[x] = '\0';
	return (dub_adr);
}
