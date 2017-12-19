/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 05:49:58 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/19 15:55:24 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHECKER_H
#define _CHECKER_H

#include <unistd.h>
#include <stdlib.h>
#include "../libft/inc/libft.h"

# define MAXI "-2147483647"

typedef struct		s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;


t_stack		*ft_new_stack(int num);

void		ft_printer(t_stack *a, t_stack *b);
void		ft_rev_all(t_stack **a, t_stack **b);
void		ft_swap_all(t_stack **a, t_stack **b);
void		ft_rotate_all(t_stack **a, t_stack **b);
void		fill_stack(t_stack *s, char **av);

int			exce_inst(t_stack *a, t_stack *b);
int			ft_lstlen(t_stack *s);
int			ft_swap(t_stack *s);
int			ft_rev_rotate(t_stack **s);
int			ft_rotate(t_stack **s);
int			ft_push(t_stack **src, t_stack **dst);
int			ft_ssort(t_stack *s);
int			is_maxint(char *org, char *num);
int			is_dup(t_stack	*a);
int			check_inst(t_stack **a, t_stack **b, char *flag);

#endif
