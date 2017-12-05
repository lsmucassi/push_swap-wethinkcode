/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:44:17 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/01 13:38:46 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

int		ft_rev_rotate(t_stack **s)
{
	t_stack *head;
	t_stack *last;

	head = (*s);
	if (ft_lstlen((*s)) > 1)
	{
		last = (*s);
		while (last->next != NULL)
			last = last->next;
		while ((*s)->next != last)
			(*s) =  (*s)->next;
		last->next = head;
		(*s)->next = NULL;
		head = last;
		(*s) = head;
	}
	else
	{
		write(1, "KO\n", 3);
		return (-1);
	}
	return (0);
}

void	ft_rev_all(t_stack **a, t_stack **b)
{
	ft_rev_rotate(&(*a));
	ft_rev_rotate(&(*b));
}
