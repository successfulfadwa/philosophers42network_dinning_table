/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:13:12 by faljaoui          #+#    #+#             */
/*   Updated: 2022/01/03 22:53:55 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1]))
			word++;
		if (i == 0 && s[i] != c)
			word++;
		i++;
	}
	return (word);
}

int	word_index(const char *s, char c, int i)
{
	int	wordindex;

	wordindex = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		wordindex++;
	}
	return (wordindex);
}

int	freetable(char **tab, char *s, int t)
{
	if (s == 0)
	{
		while (t)
			free(tab[t--]);
		free(tab[0]);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		t;
	char	**tab;

	i = 0;
	t = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (tab == 0)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && t < countwords(s, c))
		{
			tab[t] = ft_substr(s, i, word_index(s, c, i));
			if (freetable(tab, tab[t], t))
				return (NULL);
			i += word_index(s, c, i);
			t++;
		}
		i++;
	}
	tab[t] = NULL;
	return (tab);
}
