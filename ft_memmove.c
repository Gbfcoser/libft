/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:54:04 by giborges          #+#    #+#             */
/*   Updated: 2025/10/27 19:47:29 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_dest;
	char	*temp_src;
	size_t	i;

	if ((!dst) && (!src))
		return (NULL);
	temp_dest = (char *)dst;
	temp_src = (char *)src;
	i = 0;
	if (temp_dest > temp_src)
	{
		while (len-- > 0)
			temp_dest[len] = temp_src[len];
	}
	else
	{
		while (len > i++)
			temp_dest[i] = temp_src[i];
	}
	return (dst);
}
