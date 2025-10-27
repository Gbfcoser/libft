/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:10:51 by giborges          #+#    #+#             */
/*   Updated: 2025/10/27 19:17:38 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_w(const char *s, char c);
static char		*write_w(const char *s, char c);
static void		ft_free(char **array, int ctu);
static void		ft_vars(size_t *i, size_t *j);

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	ft_vars(&i, &j);
	if (!s)
		return (NULL);
	result = (char **)malloc((count_w(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			break ;
		result[j] = write_w(&s[i], c);
		if (!result[j])
			return (ft_free(result, j), NULL);
		j++;
		while (s[i] && s[i] != c)
			i++;
	}
	result[j] = NULL;
	return (result);
}

static void	ft_vars(size_t *i, size_t *j)
{
	*i = 0;
	*j = 0;
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
		if (s[i])
		{
			ctu++;
			if (s[i] && s[i] != c)
				i++;
		}
	}
	return (ctu);
}

static void	ft_free(char **array, int ctu)
{
	size_t	i;

	i = 0;
	while (i < ctu)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
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
		word[i] = '\0';
		i++;
	}
	word[i] = '\0';
	return (word);
}
