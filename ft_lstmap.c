/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:37:54 by giborges          #+#    #+#             */
/*   Updated: 2025/11/03 17:13:33 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*n_elem;
	void	*n_content;

	if (!lst || !f || !del)
		return (NULL);
	n_lst = NULL;
	while (lst)
	{
		n_content = f(lst->content);
		n_elem = ft_lstnew(n_content);
		if (!n_elem)
		{
			if (del)
				del(n_content);
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, n_elem);
		lst = lst->next;
	}
	return (n_lst);
}
