/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_pa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:27:50 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/07 14:30:48 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *o, int to_print)
{
	int tmp;
	int i;

	i = 1;
	if (o->t_st2 > 0)
	{
		tmp = o->stack2[0];
		while (i < o->t_st2)
		{
			o->stack2[i - 1] = o->stack2[i];
			i++;
		}
		o->t_st2--;
		i = o->t_st1;
		while (i > 0)
		{
			o->stack1[i] = o->stack1[i - 1];
			i--;
		}
		o->t_st1++;
		o->stack1[i] = tmp;
	}
	if (to_print == 1)
		ft_putstr_fd("pa\n", 1);
}
