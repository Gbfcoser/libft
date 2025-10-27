/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:12:43 by giborges          #+#    #+#             */
/*   Updated: 2025/10/24 13:59:22 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	lens1;
	size_t	lens2;
	int		i;
	int		j;
	char	*join;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	join = malloc((lens1 + 1) + (lens2 + 1));
	i = 0;
	j = 0;
	if (!join)
		return (NULL);
	while (s1[i])
		join[j++] = s1[i++];
	i = 0;
	while (s2[i])
		join[j++] = s2[i++];
	join[j] = '\0';
	return (join);
}
