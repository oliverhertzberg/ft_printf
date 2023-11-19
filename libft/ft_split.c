/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:53:00 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/11/06 19:53:40 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || (s[i - 1] == c)))
			count++;
		i++;
	}
	return (count);
}

static	char	*get_word(char const *s, int start, char c, int index)
{
	char	*word;
	int		end;
	int		i;

	i = 0;
	end = start;
	if (s[index] == '\0')
		end = index;
	else
	{
		while (s[end] != c)
			end++;
	}
	word = (char *)malloc((end - start) + 1);
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i++] = s[start++];
	}
	word[i] = '\0';
	return (word);
}

void	*free_all(char **strings, int j)
{
	while (j >= 0)
	{
		free(strings[j]);
		j--;
	}
	free(strings);
	return (NULL);
}

char	**assemble(char **strings, char const *s, char c)
{
	int	j;
	int	i;
	int	start;

	j = 0;
	i = 0;
	start = -1;
	while (s[i] || start >= 0)
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			start = i;
		else if (start >= 0 && (s[i] == c || !(s[i])))
		{
			strings[j++] = get_word(s, start, c, i);
			start = -1;
			if (!(strings[j - 1]))
				return (free_all(strings, j - 1));
		}
		if (s[i])
			i++;
	}
	strings[j] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;

	if (!s)
		return (NULL);
	strings = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strings)
		return (NULL);
	return (assemble(strings, s, c));
}
