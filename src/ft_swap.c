/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:44:03 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/01 13:32:57 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

int		ft_swap(t_stack *s)
{
	int i;

	i = 0;
	if (ft_lstlen(s))
	{
		i = s->next->data;
		s->next->data = s->data;
		s->data = i;
	}
	else
	{
		write(1, "KO\n", 3);
		return (-1);
	}
	return (0);
}

void	ft_swap_all(t_stack **a, t_stack **b)
{
	ft_swap((*a));
	ft_swap((*b));
}
