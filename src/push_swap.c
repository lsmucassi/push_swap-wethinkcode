/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 05:28:40 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/15 02:09:28 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

int		main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	t_stack *head;
	int		i;

	i = 0;
	if (ac > 1)
	{
		a = ft_new_stack(ft_atoi(av[1]));
		b = NULL;
		head = a;
		fill_stack(a, av);
		a = head;
/*		if (is_dup(a) || is_maxint(av[1], av[1]))
			return (0);*/
		while (1)
		{
			if (ft_ssort(a) && b == NULL)
			{
				ft_putstr("OK");
				return (0);
			}
			else
			{
				fix_stack(a, b);
				ft_putstr("KO");
				return (0);
			}
		}
	}
	return (0);
}
