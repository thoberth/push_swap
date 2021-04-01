/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:30:00 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/29 09:49:59 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack *o)
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
	ft_put_stack(o);
}