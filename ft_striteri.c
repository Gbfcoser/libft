/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:21:05 by giborges          #+#    #+#             */
/*   Updated: 2025/10/29 14:33:38 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strteri(char const *s, char (*f)(unsigned int i, char c))
{
	unsigned i;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}