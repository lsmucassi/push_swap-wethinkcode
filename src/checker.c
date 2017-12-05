/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:35:31 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/05 15:49:01 by lmucassi         ###   ########.fr       */
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
		write(1, "Error!", 6);
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
		a = ft_new_stack(atoi(av[1]));
		b = NULL;
		head = a;
		i = 2;
		while (av[i])
		{
			a->next = ft_new_stack(atoi(av[i]));
			a = a->next;
			i++;
		}
		a = head;
		/*while (a != NULL)
		{
			if (!ft_isdigit(a->data))
				return (1);
				a = a->next;
		}
		a = head;*/
		while (1)
		{
			i = get_next_line(0, &flag);
			if (i == 0)
			{
				write(1, "GOOD\n", 5);
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
