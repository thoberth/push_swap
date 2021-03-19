/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:37:10 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/08 12:49:54 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew(f(lst->content));
	b = a;
	while (lst->next)
	{
		lst = lst->next;
		if (!(a->next = ft_lstnew(f(lst->content))))
		{
			ft_lstdelone(a->next, del);
			return (NULL);
		}
		a = a->next;
	}
	return (b);
}
