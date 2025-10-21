/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:41:23 by giborges          #+#    #+#             */
/*   Updated: 2025/10/21 09:48:22 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (!(c >= ' ' && c <= '~'))
		return (0);
	else
		return (1);
}

// int main (void)
// {
//     printf ("%d\n", ft_isprint('['));
//     printf ("%d\n", ft_isprint(127));
//     // return (0);
// }