/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exce_inst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:39:31 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/19 16:11:12 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int		exce_inst(t_stack *a, t_stack *b)
{
	int		i;
	char	*flag;

	i = 0;
	while (1)
	{
		i = get_next_line(0, &flag);
		if (i == 0)
		{
			(ft_ssort(a) && b == NULL) ? ft_putstr("OK\n") : ft_putstr("KO\n");
			return (1);
		}
		else if (i == 1)
		{
			if (check_inst(&a, &b, flag))
				ft_printer(a, b);
			else
			{
				ft_putstr("Error\n");
				return (-1);
			}
		}
	}
}
