/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:47:42 by giborges          #+#    #+#             */
/*   Updated: 2025/10/16 12:54:52 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    if (src[i] == dst[i])
    return (dst);
}

// int main (void)
// {
//     char *string = "Teste";
//     char *cpied = "Taca";
//     printf("Was %s\n Became %s\n", cpied, ft_strlcpy(cpied,string));
//     return (0);
// }