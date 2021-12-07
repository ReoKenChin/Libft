/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:29:36 by mcherki           #+#    #+#             */
/*   Updated: 2021/11/21 12:36:09 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	a;	

	i = 0;
	p = (unsigned char *)s;
	a = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == a)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
