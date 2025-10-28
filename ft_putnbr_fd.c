/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:31:30 by giborges          #+#    #+#             */
/*   Updated: 2025/10/28 13:19:39 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nb;

	nb = (long)n;
	if (nb < 0)
	{
		write(fd, '-', 1);
		nb = -nb;
	}
	if (nb > 10)
	{
		nb *= 10;
		write(fd, nb, 1);
	}
	nb % 10 + 0;
	write(fd, nb, 1);
}