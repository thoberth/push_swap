/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:41:44 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/27 13:23:40 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_biggest_len(int *tab, int len_tab)
{
	int len;
	int tmp;
	int i;

	i = 0;
	len = 0;
	while (i < len_tab)
	{
		tmp = len;
		len = ft_intlen(tab[i]);
		if (len < tmp)
			len = tmp;
		i++;
	}
	return (len);
}

void	ft_put_stack2(t_stack *o, int i, int t)
{
	int a;

	if (i < o->t_st1)
	{
		ft_putnbr_fd(o->stack1[i], 1);
		if (t <= 6)
			a = 7 - ft_intlen(o->stack1[i]);
		else
			a = t - ft_intlen(o->stack1[i]) + 1;
		while (a--)
			ft_putchar_fd(' ', 1);
	}
	else
	{
		a = t + 1;
		while (a--)
			ft_putchar_fd(' ', 1);
	}
	ft_putstr_fd("| ", 1);
	if (i < o->t_st2)
		ft_putnbr_fd(o->stack2[i], 1);
	ft_putchar_fd('\n', 1);
}

void	ft_put_stack(t_stack *o)
{
	int i;
	int t;
	int a;

	t = ft_biggest_len(o->stack1, o->t_st1);
	i = 0;
	ft_putstr_fd("stack1", 1);
	if (t <= 6)
		ft_putchar_fd(' ', 1);
	else
	{
		a = t - 5;
		while (a--)
			ft_putchar_fd(' ', 1);
	}
	ft_putstr_fd("| stack2\n", 1);
	while (i < o->t_st1 || i < o->t_st2)
	{
		ft_put_stack2(o, i, t);
		i++;
	}
}
