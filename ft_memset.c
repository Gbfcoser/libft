/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:46:46 by giborges          #+#    #+#             */
/*   Updated: 2025/10/15 16:54:38 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    memset(void *b, int c, size_t len)
{
    unsigned char var;

    var = (unsigned char *) b;
    while (var != len)
    {
        c = var;
    }
    return (b);
}