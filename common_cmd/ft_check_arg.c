/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:53:21 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/07 14:34:26 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_init(t_stack *o, int ac)
{
	if (!(o->stack1 = malloc(sizeof(int) * (ac - 1))))
		exit(1);
	if (!(o->stack2 = malloc(sizeof(int) * (ac - 1))))
		exit(1);
	o->t_st1 = ac - 1;
	o->t_st2 = 0;
}

int		ft_check_doublon(t_stack *o)
{
	int i;
	int a;

	i = 1;
	while (i < o->t_st1)
	{
		a = 0;
		while (a < i)
		{
			if (o->stack1[a] == o->stack1[i])
				return (1);
			a++;
		}
		i++;
	}
	return (0);
}

int		ft_check_arg2(char *s)
{
	int i;
	int a;

	i = 0;
	a = ft_strlen(s);
	if (s[i] == '-' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
		i++;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (i != a)
		return (1);
	return (0);
}

int		ft_check_arg(int ac, char **av, t_stack *o)
{
	int i;
	int t;

	i = 1;
	t = 0;
	ft_init(o, ac);
	while (i < ac)
	{
		if (ft_check_arg2(av[i]))
			return (1);
		else
			o->stack1[i - 1] = ft_atoi(av[i]);
		i++;
	}
	if (ft_check_doublon(o))
		return (1);
	return (0);
}
