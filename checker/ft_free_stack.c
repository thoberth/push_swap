/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 20:10:38 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/27 13:23:37 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_free_stack(t_stack *o)
{
	int		i;

	i = 0;
	while (o->tab_cmd[i] != NULL)
	{
		free(o->tab_cmd[i]);
		i++;
	}
	free(o->tab_cmd);
	free(o->stack1);
	free(o->stack2);
	o->t_st1 = 0;
	o->t_st2 = 0;
}
