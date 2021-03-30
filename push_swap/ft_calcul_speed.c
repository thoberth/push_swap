/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcul_speed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 22:03:34 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/30 22:33:44 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	while (tab[i++] != nbr)
		to_top++;
	if (to_top < to_calc)
		return (1);
	return (0);
}

int		ft_calcul_speed(t_stack *o, int i)
{
	int		nb_op;

	nb_op = 0;

	return (nb_op);
}

int main ()
{
	int tab[7] = {0, 12, 14, 2, 5, 9, 45};
	int t_tab = 7;

	printf("|%d|\n", ft_top(tab, t_tab, 2));
}

//1 = ra
//0 = rra