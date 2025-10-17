/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:54:04 by giborges          #+#    #+#             */
/*   Updated: 2025/10/16 12:37:53 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *temp_dest;
    unsigned char *temp_src;
    size_t i;
    if ((dst && src) == NULL)
        return (dst);
    temp_dest = (unsigned char *)dst;
    temp_src = (unsigned char *)src;
    i = 0;
    if (temp_dest > temp_src)
        while (len > 0)
        {
            len--;
            temp_dest[len] = temp_src[len];
        }
    else
        while (len > i)
        {
            temp_dest[i] = temp_src[i];
            i++;
        }
    return(dst);
}