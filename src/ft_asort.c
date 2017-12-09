/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:46:57 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/09 17:42:30 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int		ft_ssort(t_stack *s)
{
	int		sort;
	t_stack	*cpy;

	cpy = s;
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
	}
	return (sort);
}
