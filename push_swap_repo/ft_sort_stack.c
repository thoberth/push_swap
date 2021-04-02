/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:17:11 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/02 14:20:59 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	Fonction qui trie la stack a
*/

void	ft_sort_stack(t_stack *o)
{
	int smaller;
	int which_op;
	int nb_op;

	smaller = ft_find_smaller(o->stack1, o->t_st1);
	which_op = ft_top(o->stack1, o->t_st1, smaller);
	nb_op = ft_nb_op(o->stack1, o->t_st1, smaller, which_op);
	while (nb_op > 0)
	{
		if (which_op == 1)
			ra(o, 1);
		else
			rra(o, 1);
		nb_op--;
	}
}