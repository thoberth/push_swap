/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_sa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:54:22 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/23 15:58:58 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_check *o)
{
	int tmp;

	if (o->t_st1 > 2)
	{
		tmp = o->stack1[0];
		o->stack1[0] = o->stack1[1];
		o->stack1[1] = tmp;
	}
	ft_put_stack(o);
}