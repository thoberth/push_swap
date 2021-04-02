/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcul_speed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 22:03:34 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/02 11:45:34 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	Fonction qui retourne le plus petit nombre de la stack
*/

int		ft_find_smaller(int *tab, int t_tab)
{
	int to_ret;
	int i;

	i = 0;
	to_ret = tab[i++];
	while (i < t_tab)
	{
		if (tab[i] < to_ret)
			to_ret = tab[i];
		i++;
	}
	return (to_ret);
}

/*
**	Fonction qui retourne le nombre superieur et plus proche de celui a push
*/

int		ft_find_nbr(t_stack *o, int i)
{
	int		nbr;
	int		to_ret;
	int		tmp;

	nbr = o->stack2[i];
	i = 0;
	tmp = 0;
	while (i < o->t_st1)
	{
		if (o->stack1[i] > nbr)
		{
			if (tmp == 0)
			{
				to_ret = o->stack1[i];
				tmp++;
			}
			else if (o->stack1[i] < to_ret)
				to_ret = o->stack1[i];
		}
		i++;
	}
	if (tmp == 0)
		return (ft_find_smaller(o->stack1, o->t_st1));
	return (to_ret);
}

/*
**	Fonction qui retourne 1 pour ra, 0 pour rra
*/

int		ft_top(int *tab, int t_tab, int nbr)
{
	int		i;
	int		to_top;
	int		to_calc;

	i = 0;
	to_calc = t_tab / 2;
	to_top = 0;
	if (t_tab % 2 != 0)
		to_calc++;
	while (tab[i++] != nbr)
		to_top++;
	if (to_top < to_calc)
		return (1);
	return (0);
}

/*
**	Fonction qui retourne le nombre d'operation
*/

int		ft_nb_op(int *tab, int t_tab, int nbr, int ra_rra)
{
	int		i;

	if (nbr == tab[0])
		return (0);
	if (ra_rra == 0)
	{
		i = 1;
		while (tab[t_tab - 1] != nbr)
		{
			i++;
			t_tab--;
		}
	}
	else
	{
		i = 0;
		while (tab[i] != nbr)
		{
			i++;
		}
	}
	return (i);
}

/*
**	Fonction qui retourne le nombre d'action pour push
*/

int		ft_calcul_speed(t_stack *o, int i)
{
	int		nb_st1;
	int		op_st1;
	int		op_st2;
	int		nb_op1;
	int		nb_op2;

	nb_st1 = ft_find_nbr(o, i);
	op_st1 = ft_top(o->stack1, o->t_st1, nb_st1);
	op_st2 = ft_top(o->stack2, o->t_st2, o->stack2[i]);
	nb_op1 = ft_nb_op(o->stack1, o->t_st1, nb_st1, op_st1);
	nb_op2 = ft_nb_op(o->stack2, o->t_st2, o->stack2[i], op_st2);
	if (op_st1 == op_st2)
	{
		if (nb_op1 > nb_op2)
			return (nb_op1 - nb_op2);
		if (nb_op2 < nb_op1)
			return (nb_op2 - nb_op1);
		if (nb_op1 == nb_op2)
			return (nb_op1);
	}
	if (nb_op1 == 0)
		return (nb_op2);
	if (nb_op2 == 0)
		return (nb_op1);
	return (nb_op1 + nb_op2);
}