/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:35:31 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/08 14:17:40 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

/*void		fill_stack(t_stack *a, char **av)
{
	int		i;

	i = 2;
	while (av[i])
	{
		if (is_maxint(ft_itoa(ft_atoi(av[i])), av[i]))
		{
			a->next = ft_new_stack(ft_atoi(av[i]));
			a = a->next;
		}
		else
		{
			write(1, "Error\n", 6);
		}
		i++;
		}
}*/

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
		i = 2;
		fill_stack(a, av);
		a = head;
		if (is_dup(a))
			return (0);
		while (1)
		{
			i = get_next_line(0, &flag);
			if (i == 0)
			{
				if (ft_ssort(a) && b == NULL) 
					write(1, "OK\n", 3);
				else
					write(1, "KO\n", 3);
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
		return (0);
	}
}
