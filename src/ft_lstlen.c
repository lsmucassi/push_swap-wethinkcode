/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:43:19 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/20 17:28:43 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int		ft_lstlen(t_stack *s)
{
	int count;

	count = 0;
	while (s != NULL)
	{
		s = s->next;
		count++;
	}
	return (count);
}
