/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:54:24 by giborges          #+#    #+#             */
/*   Updated: 2025/10/21 12:50:22 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	int	result;

	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		result = 0;
		return (result);
	}
	result = 1;
	return (result);
}

// int main(void)
// {
//    printf ("%d\n", ft_isalpha('8'));
//     return (0);
// }