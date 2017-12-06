/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:35:55 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/06 16:42:10 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PUSHSWAP_H
#define _PUSHSWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>
#include "../libft/inc/libft.h"

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

int			ft_lstlen(t_stack *s);
int			ft_swap(t_stack *s);
int			ft_rev_rotate(t_stack **s);
int			ft_rotate(t_stack **s);
int			ft_push(t_stack **src, t_stack **dst);
int			ft_asort(t_stack *a);
int			is_maxint(char *org, char *num);
int			is_dup(t_stack	*a);

#endif
