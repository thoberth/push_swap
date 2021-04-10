/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:52:04 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/06 14:42:10 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
** Main de checker
*/

int		ft_main2(t_stack *o)
{
	if (ft_check_cmd(o->tab_cmd))
	{
		ft_putstr_fd("Error\n", 2);
		ft_free_stack(o);
		return (1);
	}
	ft_exec_cmd(o);
	ft_free_stack(o);
	return (0);
}

int		main(int ac, char **av)
{
	int		ret_read;
	char	*s;
	char	buf[BUF + 1];
	t_stack	o;

	if (ac == 1)
		return (0);
	if (ft_check_arg(ac, av, &o))
	{
		ft_putstr_fd("Error\n", 2);
		ft_free_stack(&o);
		return (1);
	}
	if (!(s = malloc(sizeof(char) * 1)))
		return (-1);
	s[0] = '\0';
	while ((ret_read = read(0, buf, BUF)) > 0)
	{
		buf[ret_read] = '\0';
		s = ft_strjoin(s, buf);
	}
	o.tab_cmd = ft_split(s, '\n');
	free(s);
	return (ft_main2(&o));
}
