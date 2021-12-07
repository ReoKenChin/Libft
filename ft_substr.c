/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:12:16 by mcherki           #+#    #+#             */
/*   Updated: 2021/11/20 19:52:02 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l_str;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	l_str = ft_strlen(s);
	if (len >= l_str)
		len = l_str;
	if (start > l_str)
		str = malloc(1);
	else
	{
		str = malloc(sizeof(char) * (len + 1));
		if (!str)
			return (NULL);
		if (start < l_str)
		{
			while (i < len)
				str[i++] = s[start++];
		}
	}
	str[i] = '\0';
	return (str);
}
