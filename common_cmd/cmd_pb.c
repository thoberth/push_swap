/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_pb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:47:41 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/01 16:08:49 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *o)
{
	int tmp;
	int i;

	i = 1;
	if (o->t_st1 > 0)
	{
		tmp = o->stack1[0];
		while (i < o->t_st1)
		{
			o->stack1[i - 1] = o->stack1[i];
			i++;
		}
		o->t_st1--;
		i = o->t_st2;
		while (i > 0)
		{
			o->stack2[i] = o->stack2[i - 1];
			i--;
		}
		o->t_st2++;
		o->stack2[i] = tmp;
	}
	ft_putstr_fd("pb\n", 1);
	ft_put_stack(o);
}
