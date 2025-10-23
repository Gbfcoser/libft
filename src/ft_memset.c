/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:18:44 by giborges          #+#    #+#             */
/*   Updated: 2025/10/14 18:40:02 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *b, int c, size_t len)
{
    unsigned char *temp;

    temp = (unsigned char *)b;
    while (len > 0)
    {
        temp = c;
        temp++;
        len--;
    }
    return(b);
}