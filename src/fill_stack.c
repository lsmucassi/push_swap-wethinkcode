/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:24:44 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/20 17:23:27 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

void	fill_stack(t_stack *s, char **av)
{
	int	i;

	i = 2;
	while (av[i])
	{
		if (is_maxint(ft_itoa(ft_atoi(av[i])), av[i]) && !is_dup(s))
		{
			s->next = ft_new_stack(ft_atoi(av[i]));
			s = s->next;
		}
		i++;
	}
}
/*
void	arg_str(t_stack *a, char **av)
{
	char **str;

	str = ft_strsplit(av[1], ' ');
	while (ft_strlen(str)*/
