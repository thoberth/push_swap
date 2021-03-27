/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:52:04 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/27 13:24:29 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		main(int ac, char **av)
{
	int		ret_read;
	char	*s;
	char	buf[BUF + 1];
	t_stack	o;

	if (!(s = malloc(sizeof(char) * 1)))
		return (-1);
	s[0] = '\0';
	if (ac == 1)
		return (0);
	else if (ft_check_arg(ac, av, &o))
		return (-1);
	while ((ret_read = read(0, buf, BUF)) > 0)
	{
		buf[ret_read] = '\0';
		s = ft_strjoin(s, buf);
	}
	o.tab_cmd = ft_split(s, '\n');
	free(s);
	if (ft_check_cmd(o.tab_cmd))
		return (-1);
	ft_exec_cmd(&o);
	ft_free_stack(&o);
}
