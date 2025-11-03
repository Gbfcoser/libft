/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:04:02 by giborges          #+#    #+#             */
/*   Updated: 2025/11/03 16:09:30 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;

	while (*lst)
	{
		i = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = i;
	}
	free(*lst);
	*lst = NULL;
}
