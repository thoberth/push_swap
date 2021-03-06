/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:18:01 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/07 14:32:05 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_stack *o, int t)
{
	int tmp;
	int i;

	i = 0;
	if (o->t_st2 > 1)
	{
		tmp = o->stack2[0];
		while (i < o->t_st2)
		{
			o->stack2[i] = o->stack2[i + 1];
			i++;
		}
		o->stack2[i - 1] = tmp;
	}
	if (t == 1)
		ft_putstr_fd("rb\n", 1);
}
