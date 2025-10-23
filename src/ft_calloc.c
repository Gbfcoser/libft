/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:13:13 by giborges          #+#    #+#             */
/*   Updated: 2025/10/22 16:26:51 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *tmp;
	size_t i;

	tmp = malloc(size * count);
	if (!tmp[i])
		return (NULL);
	while (count * size > i)
	{
		tmp = 0;
		i++;
	}
	return (tmp);
}