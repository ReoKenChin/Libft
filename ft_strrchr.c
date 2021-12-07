/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:54:14 by mcherki           #+#    #+#             */
/*   Updated: 2021/11/27 21:01:36 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	*buff;

	buff = (char *)s;
	l = ft_strlen(buff);
	while (l > 0)
	{
		if (buff[l] == (unsigned char)c)
			break ;
		l--;
	}
	if (buff[l] == (unsigned char)c)
		return (&buff[l]);
	else
		return (0);
}
