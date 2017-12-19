/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:43:41 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/19 14:24:56 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

void	ft_printer(t_stack *a, t_stack *b)
{
	t_stack *a_head;
	t_stack *b_head;

	a_head = a;
	b_head = b;
	write(1, "a", 1);
	write(1, " --- ", 5);
	write(1, "b\n", 2);
	write(1, "========\n", 9);
	while (a != NULL || b != NULL)
	{
		if (a != NULL)
		{
			ft_putnbr(a->data);
			a = a->next;
		}
		if (b != NULL)
		{
			ft_putstr("\t");
			ft_putnbr(b->data);
			b = b->next;
			write(1, "\n", 1);
		}
		else
			write(1, "\n", 1);
	}
	write(1, "--------\n", 9);
	a = a_head;
	b = b_head;
}
