/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:16:15 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/08 12:42:56 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*prev;
	t_list		*current;

	if (!(lst) || !(del))
		return ;
	prev = *lst;
	current = *lst;
	while (current)
	{
		prev = current;
		(*del)(prev->content);
		free(prev);
		current = current->next;
	}
	(*lst) = NULL;
}
