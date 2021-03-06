/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:34:06 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/19 14:55:04 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

t_stack		*ft_new_stack(int num)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack *));
	new->data = num;
	new->next = NULL;
	return (new);
}
