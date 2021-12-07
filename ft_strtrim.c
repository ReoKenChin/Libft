/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:33:01 by mcherki           #+#    #+#             */
/*   Updated: 2021/12/05 11:42:13 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search_on_char(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (0);
	while (s1[start] && search_on_char(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && search_on_char(s1[end - 1], set))
		end--;
	p = malloc(sizeof(*s1) * (end - start + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (start < end)
		p[i++] = s1[start++];
	p[i] = 0;
	return (p);
}
