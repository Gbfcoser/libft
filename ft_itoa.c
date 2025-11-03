/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:09:10 by giborges          #+#    #+#             */
/*   Updated: 2025/11/03 16:04:52 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long a)
{
	size_t	len;

	len = 0;
	if (a < 0)
	{
		a = -a;
		len++;
	}
	if (a == 0)
		return (1);
	while (a > 0)
	{
		a = a / 10;
		len++;
	}
	return (len);
}

static char	*ft_tab0(void)
{
	char	*tab;

	tab = (char *)malloc(sizeof(char) * 2);
	if (!tab)
		return (NULL);
	tab[0] = '0';
	tab[1] = '\0';
	return (tab);
}

char	*ft_itoa(int n)
{
	long	a;
	char	*tab;
	size_t	len;

	a = n;
	if (a == 0)
		return (ft_tab0());
	len = ft_len(a);
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	tab[len] = '\0';
	if (a < 0)
	{
		tab[0] = '-';
		a = -a;
	}
	while (a > 0)
	{
		len--;
		tab[len] = (a % 10) + '0';
		a = a / 10;
	}
	return (tab);
}
