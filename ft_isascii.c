/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:29:57 by giborges          #+#    #+#             */
/*   Updated: 2025/10/15 16:37:47 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isacii(int c)
{
	if (!(c >= 0 && c <= 127))
	{
		return (0);
	}
	else
		return (1);
}

// int main(void)
// {
//     printf("%d\n", ft_isacii('6'));
//     printf("%d\n", ft_isacii(127756));
// }