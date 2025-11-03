/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:37:54 by giborges          #+#    #+#             */
/*   Updated: 2025/11/03 11:24:57 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *))
{
	size_t	*n_lst;
	size_t	*n_elem;

	if (!lst || !NULL || !del)
		return (NULL);
	n_lst = NULL;
	while (lst)
	{
		n_elem = ft_lstnew(f(lst->content));
		if (!n_elem)
		{
			ft_lstclear(n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, n_elem);
	}
	return (n_lst);
}
