/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:06:34 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/07 13:08:19 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*elem1;

	if (!(new) || !(alst))
		return ;
	elem1 = *alst;
	if (!elem1)
	{
		*alst = new;
		return ;
	}
	while (elem1->next)
	{
		elem1 = elem1->next;
	}
	elem1->next = new;
	new->next = NULL;
}
