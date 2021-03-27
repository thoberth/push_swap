/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_pb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:47:41 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/27 13:26:12 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	ft_put_stack(o);
}
