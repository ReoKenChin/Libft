/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:49:51 by mcherki           #+#    #+#             */
/*   Updated: 2021/11/27 20:39:23 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;
	size_t			i;

	i = 0;
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (len < 0)
		return (NULL);
	if (p_dst == p_src)
		return (p_dst);
	else if (p_dst < p_src)
		ft_memcpy(p_dst, p_src, len);
	else
		while (len--)
			p_dst[len] = p_src[len];
	return (p_dst);
}
