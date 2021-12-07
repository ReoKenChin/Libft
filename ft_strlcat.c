/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:10:08 by mcherki           #+#    #+#             */
/*   Updated: 2021/11/27 20:57:10 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_dst;
	size_t	l_src;

	i = 0;
	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (size <= l_dst)
		return (l_src + size);
	l_src += l_dst;
	while (src[i] != '\0' && l_dst + 1 < size)
	{
		dst[l_dst] = src[i];
		l_dst++;
		i++;
	}
	dst[l_dst] = 0;
	return (l_src);
}
