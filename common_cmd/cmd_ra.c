/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_ra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:54:02 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/01 16:08:59 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *o)
{
	int tmp;
	int i;

	i = 0;
	if (o->t_st1 > 1)
	{
		tmp = o->stack1[0];
		while (i < o->t_st1)
		{
			o->stack1[i] = o->stack1[i + 1];
			i++;
		}
		o->stack1[i - 1] = tmp;
	}
	ft_putstr_fd("ra\n", 1);
	ft_put_stack(o);
}
