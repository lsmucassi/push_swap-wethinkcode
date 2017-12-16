/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 01:41:44 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/15 02:09:36 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

void	fix_stack(t_stack *a, t_stack *b)
{
	t_stack *temp;
	t_stack *f_l;
	t_stack *s_l;
	t_stack *t_l;

	f_l = 0;
	s_l = 0;
	t_l = 0;
	temp = a;
	while (a)
	{
		if (a->data > f_l && a->data > s_l && a->data > t_l)
			t_l = a;
		else if (a->data > f_l && a->data > s_l && a->data < t_l)
			s_l = a->data;
		else if (a->data > f_l && a->data < s_l && a->data < t_l)
			f_l =a->data;
		a = a->next;
	}
	a = temp;
	ft_putstr((const char *)f_l);
	ft_putstr((const char *)s_l);
	ft_putstr((const char *)t_l);
	ft_putstr((const char *)b);
}