/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:18:01 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/23 16:18:33 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rb(t_check *o)
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
	ft_put_stack(o);
}