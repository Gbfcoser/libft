/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 07:45:34 by giborges          #+#    #+#             */
/*   Updated: 2025/10/15 11:00:23 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower (int c)
{
    if (!(c >= 'A' && c <= 'Z'))
        return (c);
    else
    {
        c += 32;
        return (c);
    }
    
}

// int main(void)
// {
//     char letter = 'A';
//     printf("%c\n", ft_tolower(letter));
// }