/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 12:58:44 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/19 15:29:48 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int		check_inst(t_stack **a, t_stack **b, char *flag)
{
	if (!ft_strcmp(flag, "sa"))
		ft_swap((*a));
	else if (!ft_strcmp(flag, "sb"))
		ft_swap((*b));
	else if (!ft_strcmp(flag, "ss"))
		ft_swap_all(a, b);
	else if (!ft_strcmp(flag, "pb"))
		ft_push(a, b);
	else if (!ft_strcmp(flag, "pa"))
		ft_push(b, a);
	else if (!ft_strcmp(flag, "ra"))
		ft_rotate(a);
	else if (!ft_strcmp(flag, "rb"))
		ft_rotate(b);
	else if (!ft_strcmp(flag, "rr"))
		ft_rotate_all(a, b);
	else if (!ft_strcmp(flag, "rra"))
		ft_rev_rotate(a);
	else if (!ft_strcmp(flag, "rrb"))
		ft_rev_rotate(b);
	else if (!ft_strcmp(flag, "rrr"))
		ft_rev_all(a, b);
	else
		return (0);
	return (1);
}
