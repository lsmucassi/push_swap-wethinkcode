/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:35:31 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/20 17:34:22 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int		main(int ac, char **av)
{
	t_stack	*a;
	t_stack *b;
	t_stack	*head;
	char **str;
	
	if (ac == 2)
	{
		ft_putstr("Working with one ARG string\n");
		str = ft_strsplit(av[1], ' ');
		size_t i = ft_strlen(*str);
		while (i > 0)
		{
			ft_putstr(*str++);
			ft_putstr("\n");
		}
	}
	else if (ac > 1)
	{
		a = ft_new_stack(ft_atoi(av[1]));
		b = NULL;
		head = a;
		fill_stack(a, av);
		a = head;
		if (is_dup(a))
			return (0);
		exce_inst(a, b);
	}
	return (0);
}
