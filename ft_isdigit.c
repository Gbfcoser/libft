/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:36:10 by giborges          #+#    #+#             */
/*   Updated: 2025/10/21 09:48:19 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
	{
		return (0);
	}
	else
		return (1);
}

// int main (void)
// {
//     printf("%d\n", ft_isdigit('5'));
//     printf("%d\n", ft_isdigit('A'));
//     return (0);
// }