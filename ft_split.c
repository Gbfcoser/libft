/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:10:51 by giborges          #+#    #+#             */
/*   Updated: 2025/10/28 21:29:57 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_w(const char *s, char c);
static char		*write_w(const char *s, char c);
static void		ft_free(char **array, size_t ctu);
static size_t	splitting(char **result, const char *s, char c);

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	i;

	if (!s)
		return (NULL);
	i = count_w(s, c);
	result = ft_calloc((i + 1), sizeof(char *));
	if (!result)
		return (NULL);
	if (splitting(result, s, c) == (size_t)-1)
		return (NULL);
	return (result);
}

static size_t	splitting(char **result, const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			result[j] = write_w(&s[i], c);
			if (!result[j])
			{
				ft_free(result, j);
				return ((size_t) - 1);
			}
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	result[j] = NULL;
	return (j);
}

static size_t	count_w(const char *s, char c)
// Conta quatidade de palavras em s e se for igual a c, salta
{
	size_t	ctu;
	size_t	i;

	ctu = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			ctu++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (ctu);
}

static void	ft_free(char **array, size_t ctu)
{
	size_t	i;

	i = 0;
	while (i < ctu)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	*write_w(const char *s, char c)
{
	size_t	len;
	char	*word;
	size_t	i;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
