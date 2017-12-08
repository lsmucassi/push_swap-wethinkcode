/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:43:54 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/08 05:56:44 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int		ft_rotate(t_stack **s)
{
	t_stack *head;
	t_stack *last;

	head = (*s);
	if (ft_lstlen((*s)) > 1)
	{
		last = (*s);
		while (last->next != NULL)
			last = last->next;
		last->next = (*s);
		head = (*s)->next;
		(*s)->next = NULL;
		(*s) = head;
	}
	else
	{
		write(1, "KO\n", 3);
		return (-1);
	}
	return (0);
}

void	ft_rotate_all(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
}
