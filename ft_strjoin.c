/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:59:04 by mcherki           #+#    #+#             */
/*   Updated: 2021/11/17 13:30:44 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	p = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1)
			* sizeof(char));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		p[j++] = s2[i++];
	}
	p[j] = '\0';
	return (p);
}
