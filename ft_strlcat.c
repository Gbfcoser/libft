/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:23:28 by giborges          #+#    #+#             */
/*   Updated: 2025/10/24 14:30:08 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (len_d >= dstsize)
		len_d = dstsize;
	if (len_d == dstsize)
		return (len_d + len_s);
	if (len_s < len_d + dstsize)
		ft_memcpy(dst + len_d, src, len_s + 1);
	else
	{
		ft_memcpy(dst + len_d, src, dstsize - len_d - 1);
		dst[dstsize - 1] = '\0';
	}
	return (len_s + len_d);
}
