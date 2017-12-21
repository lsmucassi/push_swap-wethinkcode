/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:35:31 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/21 15:15:14 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int		main(int ac, char **av)
{
	t_stack	*a;
	t_stack *b;
	t_stack	*head;
	char **str;
	int i;
	
	
	if (ac == 2)
	{
		i = 1;
		b = NULL;
		ft_putstr("Working with one ARG string\n");
		str = ft_strsplit(av[1], ' ');
		
		a = ft_new_stack(ft_atoi(str[0]));
		while (*str)
		{	
			ft_putstr(*str++);
			a = ft_new_stack(ft_atoi(str[i]));
			ft_putstr("\n");
			i++;
		}
		ft_printer(a, b);
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
