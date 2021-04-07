/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:18:42 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/07 14:31:57 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_stack *o, int to_print)
{
	if (to_print == 1)
		ft_putstr_fd("rr\n", 1);
	ra(o, 0);
	rb(o, 0);
}
