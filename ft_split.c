/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:13:32 by mcherki           #+#    #+#             */
/*   Updated: 2021/12/06 12:19:39 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (*str)
	{
		if (*str != c && word == 0)
		{
			word = 1;
			i++;
		}
		else if (*str == c)
			word = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	**ft_free(char **p, size_t stop)
{
	size_t	i;

	i = 0;
	while (i <= stop)
		free(p[i++]);
	free(p);
	return (NULL);
}

static char	**splitting(char **p, char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;

	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			p[j++] = word_dup(s, index, i);
			if (!p[j - 1])
				return (ft_free(p, j - 1));
			index = -1;
		}
		i++;
	}
	p[j] = 0;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (0);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	return (splitting(split, s, c));
}
