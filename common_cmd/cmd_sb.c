/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_sb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:59:18 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/01 16:11:44 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack *o)
{
	int tmp;

	if (o->t_st2 > 2)
	{
		tmp = o->stack2[0];
		o->stack2[0] = o->stack2[1];
		o->stack2[1] = tmp;
	}
	ft_putstr_fd("sb\n", 1);
	ft_put_stack(o);
}
