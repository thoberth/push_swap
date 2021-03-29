/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 09:47:49 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/29 09:56:50 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP
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
//	CMD CHECKER
*/
int				ft_check_arg(int ac, char **av, t_stack *o);
void			ft_init(t_stack *o, int ac);
void			ft_put_stack(t_stack *o);
void			ft_free_stack(t_stack *o);
int				ft_check_cmd(char **tab_s);
void			ft_exec_cmd(t_stack *o);
int				ft_check_issort(t_stack *o);

/*
//	COMMON CMD
*/
void			pa(t_stack *o);
void			pb(t_stack *o);
void			sa(t_stack *o);
void			sb(t_stack *o);
void			ss(t_stack *o);
void			ra(t_stack *o);
void			rb(t_stack *o);
void			rr(t_stack *o);
void			rra(t_stack *o);
void			rrb(t_stack *o);
void			rrr(t_stack *o);

#endif
