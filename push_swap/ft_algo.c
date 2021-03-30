/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:57:27 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/30 22:02:27 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo2(t_stack *o)
{
	int		i;
	int		tmp;

	i = 0;
	while (o->t_st1 > 3)
		pb(o);
	tmp = ft_calcul_speed(o, i++);
	while (i < o->t_st2)
	{
		if (tmp < ft_calcul_speed(o, i))
			tmp = ft_calcul_speed(o, i);
		i++;
	}
}

void	ft_algo(t_stack *o)
{
	if (o->t_st1 == 2)
	{
		sa(o);
		ft_putstr_fd("sa\n", 1);
	}
	else if (o->t_st1 == 3)
	{
		if (ft_isclockwise(o) && o->stack1[0] < o->stack1[1])
			rra(o);
		else if (ft_isclockwise(o) && o->stack1[0] > o->stack1[1])
			ra(o);
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