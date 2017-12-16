/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:35:31 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/15 01:43:21 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"
/*
int 		main(int ac, char **av)
{
	t_stack	*a;
	t_stack *b;
	t_stack	*head;
	char	*flag;
	int		i;

	if (ac > 1)
	{
		a = ft_new_stack(ft_atoi(av[1]));
		b = NULL;
		head = a;
		i = 1;
		fill_stack(a, av);
		a = head;
		if (is_dup(a) || is_maxint(av[1], av[1]))
			return (0);
		while (1)
		{
			i = get_next_line(0, &flag);
			if (i == 0)
			{
			if (ft_ssort(a) && b == NULL) 
					ft_putstr("OK\n");
				else
					ft_putstr("KO\n");
				return (1);
			}
			else if (i == 1)
			{
				if (check_inst(&a, &b, flag) == 1)
					ft_printer(a, b);
				else
					return (-1);
			}
		}
	}
	return (0);
}*/
