/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:37:44 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/07 14:40:04 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	Fonction qui permettent simplement d'effectuer des
**	deplacements dans une stack
*/

void	ft_move_b(t_stack *o, int op_st2, int nb_op2)
{
	while (nb_op2 > 0)
	{
		if (op_st2 == 0)
			rrb(o, 1);
		else
			rb(o, 1);
		nb_op2--;
	}
}

void	ft_move_a(t_stack *o, int op_st1, int nb_op1)
{
	while (nb_op1 > 0)
	{
		if (op_st1 == 0)
			rra(o, 1);
		else
			ra(o, 1);
		nb_op1--;
	}
}
