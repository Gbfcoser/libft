/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:10:51 by giborges          #+#    #+#             */
/*   Updated: 2025/10/27 13:58:00 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	count_w(const char *s, char c);
static char		*write_w(const char *s, char c);
static void		ft_free(void);

#include "libft.h"

char	**ft_split(const char *s, char c)
{
}

static int	count_w(const char *s, char c)
// Conta quatidade de palavras em s e se for igual a c, salta
{
	size_t ctu;
	size_t i;

	ctu = 0;
	i = 0;

	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i] != c)
			ctu++;
	}
	return (ctu);
}

static void	ft_free(void)
{
}

static char	*write_w(const char *s, char c)
{
}