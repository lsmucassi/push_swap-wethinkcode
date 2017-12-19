/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:35:31 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/19 15:56:28 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int		main(int ac, char **av)
{
	t_stack	*a;
	t_stack *b;
	t_stack	*head;

	if (ac == 2)
	{
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
