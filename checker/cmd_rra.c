/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:21:17 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/23 16:29:22 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(t_check *o)
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
	ft_put_stack(o);
}