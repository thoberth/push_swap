/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:21:17 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/07 14:31:51 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *o, int t)
{
	int tmp;
	int i;

	i = o->t_st1 - 1;
	if (o->t_st1 > 1)
	{
		tmp = o->stack1[i];
		while (i > 0)
		{
			o->stack1[i] = o->stack1[i - 1];
			i--;
		}
		o->stack1[0] = tmp;
	}
	if (t == 1)
		ft_putstr_fd("rra\n", 1);
}
