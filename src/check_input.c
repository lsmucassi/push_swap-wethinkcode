/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 14:23:30 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/19 14:59:19 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int		is_maxint(char *org, char *num)
{
	char *MAXI = "-2147483647";

	if (ft_strcmp(org, num) || ft_atoi(num) < ft_atoi(MAXI))
	{
		ft_putstr("Error, input exceeds max integer\n");
		exit(0);
	}
	return (1);
}

int		is_dup(t_stack *a)
{
	t_stack	*list;
	t_stack	*cmp;

	list = a;
	while (list != NULL && list->next != NULL)
	{
		cmp = list;
		while (cmp->next != NULL)
		{
			if (list->data == cmp->next->data)
			{
				ft_putstr("Error, input has duplicates\n");
				return (1);
			}
			else
				cmp = cmp->next;
		}
		list = list->next;
	}
	return (0);
}
