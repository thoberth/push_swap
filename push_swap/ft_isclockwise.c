/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isclockwise.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 20:29:58 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/30 21:09:40 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_clockwise(t_stack *o)
{
	if ((o->stack1[0] > o->stack1[1] && o->stack1[1] < o->stack1[2]) ||
		(o->stack1[0] > o->stack1[1] && o->stack1[1] > o->stack1[2]) ||
		(o->stack1[0] < o->stack1[1] && o->stack1[2] < o->stack1[1]))
		sa(o);
}

int		ft_isclockwise(t_stack *o)
{
	if ((o->stack1[0] < o->stack1[1] && o->stack1[1] < o->stack1[2]) ||
		(o->stack1[0] < o->stack1[1] && o->stack1[2] < o->stack1[0]) ||
		(o->stack1[0] > o->stack1[2] && o->stack1[1] < o->stack1[2]))
		return (1);
	return (0);
}
