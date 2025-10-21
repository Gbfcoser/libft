/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:22:22 by giborges          #+#    #+#             */
/*   Updated: 2025/10/21 10:29:21 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int i;
	char d;
	char *hold;

	d = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == d)
			hold = (char *)&s[i];
		return (hold);
		i++;
	}
	if (s[i] == d)
		hold = (char *)&s[i];
	return (hold);
}