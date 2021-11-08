/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:46:30 by sacha             #+#    #+#             */
/*   Updated: 2021/11/03 17:54:55 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 1;
	while (*s)
	{
		if (*s != c && flag)
		{
			count++;
			flag = 0;
		}
		else if (*s == c)
			flag = 1;
		s++;
	}
	return (count);
}

static int	ft_get_next_pos(char const *s, char c, int pos)
{
	int	next_pos;

	next_pos = 0;
	while (s[pos] && s[pos] != c)
	{
		pos++;
		next_pos++;
	}
	return (next_pos);
}

static void	ft_free_tabs(char **tab, char const *s, char c)
{
	int	i;

	i = 0;
	while (i < ft_count_words(s, c))
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static char	*ft_fill_word(char **tab, char const *s, char c, int letter_pos)
{
	char	*word;

	word = NULL;
	word = ft_substr(s, letter_pos, ft_get_next_pos(s, c, letter_pos));
	if (!word)
	{
		ft_free_tabs(tab, s, c);
		return (NULL);
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	int			i;
	int			j;

	if (s == NULL)
		return (NULL);
	split = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_count_words(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		split[i] = ft_fill_word(split, s, c, j);
		while (s[j] && s[j] != c)
			j++;
	}
	split[i] = NULL;
	return (split);
}
