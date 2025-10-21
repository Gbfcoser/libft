/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:00:24 by giborges          #+#    #+#             */
/*   Updated: 2025/10/21 10:21:50 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			d;

	d = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == d)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == d)
		return ((char *)&s[i]);
	return (NULL);
}

// int main(void)
// {
//    return (0);
// }