/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isclockwise.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 20:29:58 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/02 12:31:17 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	Fonction met stack1 dnas le sens horlogique
*/
void	ft_sort_clockwise(t_stack *o)
{
	if ((o->stack1[0] > o->stack1[1] && o->stack1[1] < o->stack1[2]) ||
		(o->stack1[0] > o->stack1[1] && o->stack1[1] > o->stack1[2]) ||
		(o->stack1[0] < o->stack1[1] && o->stack1[2] < o->stack1[1]))
		sa(o, 1);
}

/*
**	Fonction qui verifie si stack1 est dans le sens horlogique
*/
int		ft_isclockwise(t_stack *o)
{
	if ((o->stack1[0] < o->stack1[1] && o->stack1[1] < o->stack1[2]) ||
		(o->stack1[0] < o->stack1[1] && o->stack1[2] < o->stack1[0]) ||
		(o->stack1[0] > o->stack1[2] && o->stack1[1] < o->stack1[2]))
		return (1);
	return (0);
}
