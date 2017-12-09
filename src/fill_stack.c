/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:24:44 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/09 17:06:03 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

void	fill_stack(t_stack *s, char **av)
{
	int	i;
	
	i = 2;
	while (av[i])
	{
		if (is_maxint(ft_itoa(ft_atoi(av[i])), av[i]))
		{
			s->next = ft_new_stack(ft_atoi(av[i]));
			s = s->next;
		}
		else
			write(1, "Error\n", 6);
		i++;
	}
}
