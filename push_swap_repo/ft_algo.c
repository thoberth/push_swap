/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:57:27 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/02 15:19:22 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	ft_move_both(t_stack *o, int op_st1, int *nb_op1, int *nb_op2)
{
	while (*nb_op1 > 0 && *nb_op2 > 0)
	{
		if (op_st1 == 0)
			rrr(o);
		else
			rr(o);
		(*nb_op1)--;
		(*nb_op2)--;
	}
}

/*
**	Fonction qui place les stacks correctement
*/

void	ft_move_elem(t_stack *o, int i)
{
	int	nb_st1;
	int	op_st1;
	int	op_st2;
	int	nb_op1;
	int	nb_op2;

	nb_st1 = ft_find_nbr(o, i);
	op_st1 = ft_top(o->stack1, o->t_st1, nb_st1);
	op_st2 = ft_top(o->stack2, o->t_st2, o->stack2[i]);
	nb_op1 = ft_nb_op(o->stack1, o->t_st1, nb_st1, op_st1);
	nb_op2 = ft_nb_op(o->stack2, o->t_st2, o->stack2[i], op_st2);
	if (op_st1 == op_st2)
		ft_move_both(o, op_st1, &nb_op1, &nb_op2);
	ft_move_a(o, op_st1, nb_op1);
	ft_move_b(o, op_st2, nb_op2);
}

/*
**	Fonction qui choisit le nombre a push et place les stacks correctement
*/

void	ft_prepare_pusha(t_stack *o)
{
	int	i;
	int save;
	int	nb_op;

	i = 0;
	save = 0;
	nb_op = ft_calcul_speed(o, i++);
	while (i < o->t_st2)
	{
		if (nb_op > ft_calcul_speed(o, i))
		{
			nb_op = ft_calcul_speed(o, i);
			save = i;
		}
		i++;
	}
	ft_move_elem(o, save);
}

/*
**	Fonction pour une stack > 3
*/

void	ft_algo2(t_stack *o)
{
	while (o->t_st1 > 3)
		pb(o);
	if (!ft_isclockwise(o))
		ft_sort_clockwise(o);
	while (o->t_st2 > 0)
	{
		ft_prepare_pusha(o);
		pa(o);
	}
	ft_sort_stack(o);
	ft_put_stack(o);
}

/*
**	Algo pour une stack de 2 ou 3
*/

void	ft_algo(t_stack *o)
{
	if (o->t_st1 == 2)
		sa(o, 1);
	else if (o->t_st1 == 3)
	{
		if (ft_isclockwise(o) && o->stack1[0] < o->stack1[1])
			rra(o, 1);
		else if (ft_isclockwise(o) && o->stack1[0] > o->stack1[1])
			ra(o, 1);
		else
		{
			ft_sort_clockwise(o);
			if (ft_check_issort(o->stack1, o->t_st1))
				ft_algo(o);
		}
	}
	else
		ft_algo2(o);
}
