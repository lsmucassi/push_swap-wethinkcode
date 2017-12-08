/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:23:52 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/08 05:55:47 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int		ft_push(t_stack **src, t_stack **dst)
{
	t_stack *head;
	t_stack *temp;

	temp = (*dst);
	head = (*src);
	if (ft_lstlen((*src)))
	{
		(*dst) = (*src);
		(*src) = head->next;
		(*dst)->next = temp;
	}
	else
	{
		write(1, "KO\n", 3);
		return (-1);
	}
	return (0);
}
