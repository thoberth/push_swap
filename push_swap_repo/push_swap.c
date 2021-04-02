/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:15:31 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/30 21:12:03 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		main(int ac, char **av)
{
	t_stack o;
	if (ft_check_arg(ac, av, &o))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (ac >= 3 && ft_check_issort(o.stack1, o.t_st1))
		ft_algo(&o);
	return (0);
}