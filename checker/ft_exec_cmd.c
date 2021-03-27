/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:34:16 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/27 13:24:41 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_exec_cmd2(char *s, t_stack *o)
{
	if (ft_strncmp(s, "pa", 2) == 0)
			pa(o);
		else if (ft_strncmp(s, "pb", ft_strlen(s)) == 0)
			pb(o);
		else if (ft_strncmp(s, "sa", ft_strlen(s)) == 0)
			sa(o);
		else if (ft_strncmp(s, "sb", ft_strlen(s)) == 0)
			sb(o);
		else if (ft_strncmp(s, "ss", ft_strlen(s)) == 0)
			ss(o);
		else if (ft_strncmp(s, "ra", ft_strlen(s)) == 0)
			ra(o);
		else if (ft_strncmp(s, "rb", ft_strlen(s)) == 0)
			rb(o);
		else if (ft_strncmp(s, "rr", ft_strlen(s)) == 0)
			rr(o);
		else if (ft_strncmp(s, "rra", ft_strlen(s)) == 0)
			rra(o);
		else if (ft_strncmp(s, "rrb", ft_strlen(s)) == 0)
			rrb(o);
		else if (ft_strncmp(s, "rrr", ft_strlen(s)) == 0)
			rrr(o);
}

void	ft_exec_cmd(t_stack *o)
{
	int i;

	i = 0;
	while (o->tab_cmd[i] != NULL)
	{
		ft_exec_cmd2(o->tab_cmd[i], o);
		if (ft_check_issort(o))
			ft_putstr_fd("KO\n", 1);
		else
			ft_putstr_fd("OK\n", 1);
		i++;
	}
}