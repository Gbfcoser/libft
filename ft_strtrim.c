/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:35:54 by giborges          #+#    #+#             */
/*   Updated: 2025/10/28 20:50:56 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim(const char *set, char c);
static char	*str(const char *s1, size_t start, size_t len);

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (trim(set, s1[i]))
		i++;
	while (j > i && trim(set, s1[j]))
		j--;
	return (str(s1, i, j - (i - 1)));
}

static int	trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*str(const char *s1, size_t start, size_t len)
{
	char	*str1;
	size_t	i;

	i = 0;
	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str1 = ft_calloc(len + 1, sizeof(char));
	if (!str1)
		return (NULL);
	while (i < len)
	{
		str1[i] = s1[start + i];
		i++;
	}
	return (str1);
}
