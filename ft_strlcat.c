/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:23:28 by giborges          #+#    #+#             */
/*   Updated: 2025/10/28 21:01:36 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	i = 0;
	if (len_d >= dstsize)
		len_d = dstsize;
	if (len_d == dstsize)
		return (len_d + len_s);
	while (src[i] && (len_d + i + 1) < dstsize)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	if ((len_d + i) < dstsize)
		dst[len_d + i] = '\0';
	return (len_s + len_d);
}
