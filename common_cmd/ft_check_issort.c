/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_issort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:47:09 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/29 09:50:40 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_check_issort(t_stack *o)
{
	int i;

	i = 1;
	if (o->t_st2 != 0)
		return (1);
	while (i < o->t_st1)
	{
		if (o->stack1[i] < o->stack1[i - 1])
			return (1);
		i++;
	}
	return (0);
}