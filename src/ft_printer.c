/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:43:41 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/19 16:18:30 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

void	header(void)
{
	ft_putstr("a");
	ft_putstr(" --- ");
	ft_putstr("b\n");
	ft_putstr("========\n");
}

void	ft_printer(t_stack *a, t_stack *b)
{
	t_stack *a_head;
	t_stack *b_head;

	a_head = a;
	b_head = b;
	header();
	while (a != NULL || b != NULL)
	{
		if (a != NULL)
		{
			ft_putnbr(a->data);
			a = a->next;
		}
		if (b != NULL)
		{
			ft_putnbr(b->data);
			b = b->next;
			ft_putstr("\n");
		}
		else
			ft_putstr("\n");
	}
	ft_putstr("--------\n");
	a = a_head;
	b = b_head;
}
