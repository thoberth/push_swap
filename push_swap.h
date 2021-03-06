/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 09:47:49 by thoberth          #+#    #+#             */
/*   Updated: 2021/04/07 14:43:23 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "Libft/libft.h"
# define BUF 4096

typedef	struct	s_stack
{
	char	**tab_cmd;
	int		*stack1;
	int		t_st1;
	int		*stack2;
	int		t_st2;
}				t_stack;

/*
**	CMD CHECKER
*/

int				ft_check_cmd(char **tab_s);
void			ft_exec_cmd(t_stack *o);

/*
**	CMD PUSH_SWAP
*/

void			ft_algo(t_stack *o);
int				ft_isclockwise(t_stack *o);
void			ft_sort_clockwise(t_stack *o);
int				ft_calcul_speed(t_stack *o, int i);
int				ft_top(int *tab, int t_tab, int nbr);
int				ft_find_nbr(t_stack *o, int i);
int				ft_nb_op(int *tab, int t_tab, int nbr, int ra_rra);
int				ft_find_smaller(int *tab, int t_tab);
void			ft_sort_stack(t_stack *o);
void			ft_move_a(t_stack *o, int op_st1, int nb_op1);
void			ft_move_b(t_stack *o, int op_st2, int nb_op2);

/*
**	COMMON CMD
*/

void			ft_init(t_stack *o, int ac);
void			ft_free_stack(t_stack *o);
void			ft_put_stack(t_stack *o);
int				ft_check_arg(int ac, char **av, t_stack *o);
int				ft_check_issort(int *tab, int t_tab);
void			pa(t_stack *o, int to_print);
void			pb(t_stack *o, int to_print);
void			sa(t_stack *o, int to_print);
void			sb(t_stack *o, int to_print);
void			ss(t_stack *o, int to_print);
void			ra(t_stack *o, int to_print);
void			rb(t_stack *o, int to_print);
void			rr(t_stack *o, int to_print);
void			rra(t_stack *o, int to_print);
void			rrb(t_stack *o, int to_print);
void			rrr(t_stack *o, int to_print);

#endif
