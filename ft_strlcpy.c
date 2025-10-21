/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:47:42 by giborges          #+#    #+#             */
/*   Updated: 2025/10/17 09:43:45 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int i;
    int j;
    
    i = ft_strlen(src);
    j = 0;
    if (dstsize + 1 == i)
    {
        dst[j] = src[j];
        i++;
    }
    else
    {
        dst[j] = dstsize - 1;
    }
    return (i);
}

// int main (void)
// {
//     char *string = "Teste";
//     char *cpied = "Taca";
//     printf("Was %s\n Became %s\n", cpied, ft_strlcpy(cpied,string));
//     return (0);
// }