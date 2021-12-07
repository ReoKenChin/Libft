/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:27:08 by mcherki           #+#    #+#             */
/*   Updated: 2021/11/27 20:55:05 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	i = 0;
	a = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == a)
			break ;
		i++;
	}
	if (s[i] == a)
		return ((char *)s + i);
	else
		return (NULL);
}
