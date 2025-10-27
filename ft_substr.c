/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:41:35 by giborges          #+#    #+#             */
/*   Updated: 2025/10/24 11:34:17 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ss;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ss = ft_calloc(len + 1, sizeof(char));
	if (!ss)
		return (NULL);
	while (i < len)
	{
		ss[i] = s[start + i];
		i++;
	}
	return (ss);
}

// int	main(void)
// {
// 	ft_substr("Teste Com Catapimbas", 5, 10);
// 	return (0);
// }