/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:09:10 by giborges          #+#    #+#             */
/*   Updated: 2025/10/30 14:46:10 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_d(int n);
static void	put_minus(char *res, int *i, int minus);

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	int		minus;
	char	*res;

	i = 0;
	minus = ((nb = n) < 0);
	if (minus)
		nb = -nb;
	i = count_d(nb) + minus;
	res = (char *)malloc(i + 1 * sizeof(char));
	if (!res)
		return (NULL);
	res[i] = '\0';
	while (i > 0)
	{
		res[i] = (nb % 10) + '0';
		nb /= 10;
		if (nb == 0)
		{
			put_minus(res, &i, minus);
			break ;
		}
		i--;
	}
	return (res);
}

static int	count_d(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	put_minus(char *res, int *i, int minus)
{
	if (minus && *i > 0)
	{
		(*i)--;
		res[*i] = '-';
	}
}