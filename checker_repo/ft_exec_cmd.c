/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:34:16 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/07 14:27:56 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
** execute les commandes
*/

void	ft_exec_cmd2(char *s, t_stack *o)
{
	if (ft_strncmp(s, "pa", 2) == 0)
		pa(o, 0);
	else if (ft_strncmp(s, "pb", ft_strlen(s)) == 0)
		pb(o, 0);
	else if (ft_strncmp(s, "sa", ft_strlen(s)) == 0)
		sa(o, 0);
	else if (ft_strncmp(s, "sb", ft_strlen(s)) == 0)
		sb(o, 0);
	else if (ft_strncmp(s, "ss", ft_strlen(s)) == 0)
		ss(o, 0);
	else if (ft_strncmp(s, "ra", ft_strlen(s)) == 0)
		ra(o, 0);
	else if (ft_strncmp(s, "rb", ft_strlen(s)) == 0)
		rb(o, 0);
	else if (ft_strncmp(s, "rr", ft_strlen(s)) == 0)
		rr(o, 0);
	else if (ft_strncmp(s, "rra", ft_strlen(s)) == 0)
		rra(o, 0);
	else if (ft_strncmp(s, "rrb", ft_strlen(s)) == 0)
		rrb(o, 0);
	else if (ft_strncmp(s, "rrr", ft_strlen(s)) == 0)
		rrr(o, 0);
}

/*
**	Execute les commandes puis affiche KO ou OK
*/

void	ft_exec_cmd(t_stack *o)
{
	int i;

	i = 0;
	while (o->tab_cmd[i] != NULL)
	{
		ft_exec_cmd2(o->tab_cmd[i], o);
		i++;
	}
	if (ft_check_issort(o->stack1, o->t_st1) || o->t_st2 != 0)
		ft_putstr_fd("KO\n", 1);
	else
		ft_putstr_fd("OK\n", 1);
}
