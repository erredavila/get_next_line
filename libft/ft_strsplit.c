/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 14:11:21 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/14 11:57:46 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_word(const char *s, char c, int i, char **words)
{
	int	len;
	int space;

	len = 0;
	space = 0;
	while (*s == c)
	{
		s++;
		space++;
	}
	while (s[len] && s[len] != c)
		len++;
	words[i] = (char *)malloc(sizeof(**words) * (len + 1));
	if (!words[i])
		return (space + len);
	ft_strncpy(words[i], s, len);
	words[i][len] = '\0';
	return (space + len);
}

char		**ft_strsplit(const char *s, char c)
{
	int		len;
	int		i;
	char	**words;
	int		word_count;

	if (!s || !c)
		return (NULL);
	word_count = ft_count_words(s, c);
	words = (char **)malloc(sizeof(*words) * (word_count + 1));
	if (!words)
		return (NULL);
	i = 0;
	len = 0;
	while (*s)
	{
		len = ft_find_word(s, c, i, words);
		s += len;
		i++;
	}
	words[word_count] = 0;
	return (words);
}
