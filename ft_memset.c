/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:56:32 by mcherki           #+#    #+#             */
/*   Updated: 2021/11/27 20:39:57 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p_dst;
	size_t			i;

	i = 0;
	p_dst = (unsigned char *)b;
	while (i < len)
	{
		p_dst[i] = c;
		i++;
	}
	return (p_dst);
}
