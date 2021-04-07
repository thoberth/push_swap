/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:30:00 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/07 14:31:44 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack *o, int t)
{
	int tmp;
	int i;

	i = o->t_st2 - 1;
	if (o->t_st2 > 1)
	{
		tmp = o->stack2[i];
		while (i > 0)
		{
			o->stack2[i] = o->stack2[i - 1];
			i--;
		}
		o->stack2[0] = tmp;
	}
	if (t == 1)
		ft_putstr_fd("rrb\n", 1);
}
