/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:47:26 by giborges          #+#    #+#             */
/*   Updated: 2025/10/10 10:01:44 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    char *dup;
    int len;

    len = 0;
    i = 0;
    while (src[len] != '\0')
        len++;
    dup = (char *)malloc(len + 1 * sizeof(char));
    if (!dup)
        return(NULL);
    while (src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

// int main(void)
// {
//     char *string = "Teste";
//     printf("%s\n", ft_strdup(string));
//     free (ft_strdup(string));
//     return 0;
// }