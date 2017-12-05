/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:46:57 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/01 13:24:29 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

int		ft_asort(t_stack *a)
{
	int		sort;
	t_stack	*cpy;

	cpy = a;
	sort = 0;
	if (cpy != NULL)
	{	
		if (cpy->next == NULL)
			return (1);
		while (cpy->next != NULL)
		{
			if (cpy->data < cpy->next->data)
			{
				sort = 1;
				cpy = cpy->next;
			}
			else
				return (0);
		}
		return (sort);
	}
	return (sort);
}
