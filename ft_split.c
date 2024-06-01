/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtunega <dtunega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:55:37 by dtunega           #+#    #+#             */
/*   Updated: 2024/05/29 14:19:24 by dtunega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	first;
	int	wordcount;

	wordcount = 0;
	first = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			++i;
			first = 0;
		}
		while (s[i] != c && s[i] != '\0')
		{
			if (first == 0)
			{
				first = 1;
				wordcount++;
			}
			i++;
		}
	}
	return (wordcount);
}

static char	*find_and_copy_word(char const *s, char c, size_t *i)
{
	size_t	start;
	size_t	length;
	char	*word;

	start = *i;
	length = 0;
	while (s[*i] != c && s[*i] != '\0')
	{
		length++;
		(*i)++;
	}
	word = malloc((length + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, &s[start], length + 1);
	return (word);
}

// static void	*ft_free(char **res, int count)
// {
// 	int	i;

// 	i = 0;
// 	while (i < count)
// 	{
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	return (NULL);
// }

static char	**fill_words(char const *s, char c, char **res)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			res[j] = find_and_copy_word(s, c, &i);
			if (res[j] == NULL)
				return (NULL);
			j++;
		}
		else
		{
			i++;
		}
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	res = fill_words(s, c, res);
	return (res);
}
