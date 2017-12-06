/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:35:31 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/06 16:50:40 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

static int	ft_checker(t_stack **a, t_stack **b, char *flag)
{
	if (!ft_strcmp(flag, "sa"))
	{	
		ft_swap((*a));
	}
	else if (!ft_strcmp(flag, "sb"))
	{
		ft_swap((*b));
	}
	else if (!ft_strcmp(flag, "ss"))
	{
		ft_swap_all(a, b);
	}
	else if (!ft_strcmp(flag, "pb"))
	{
		ft_push(a, b);
	}
	else if (!ft_strcmp(flag, "pa"))
	{
		ft_push(b, a);
	}
	else if (!ft_strcmp(flag, "ra"))
	{
		ft_rotate(a);
	}
	else if (!ft_strcmp(flag, "rb"))
	{
		ft_rotate(b);
	}
	else if (!ft_strcmp(flag, "rr"))
	{
		ft_rotate_all(a, b);
	}
	else if (!ft_strcmp(flag, "rra"))
	{
		ft_rev_rotate(a);
	}
	else if (!ft_strcmp(flag, "rrb"))
	{
		ft_rev_rotate(b);
	}
	else if (!ft_strcmp(flag, "rrr"))
	{
		ft_rev_all(a, b);
	}
	else
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	return (1);
}

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
		while (av[i])
		{
			if (is_maxint(ft_itoa(ft_atoi(av[i])), av[i]))
			{
				a->next = ft_new_stack(ft_atoi(av[i]));
				a = a->next;
			}
			else
				return (0);
			i++;
		}
		a = head;
		if (is_dup(a))
			return (0);

		while (1)
		{
			i = get_next_line(0, &flag);
			if (i == 0)
			{
				if (ft_asort(a) && b == NULL) 
					write(1, "OK\n", 3);
				else
					write(1, "KO\n", 3);
				return (1);
			}
			else if (i == 1)
			{
				if (ft_checker(&a, &b, flag) == 1)
					ft_printer(a, b);
				else
					return (-1);
			}
		}
		return (0);
	}
}
