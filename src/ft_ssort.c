/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 13:02:18 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/16 13:46:52 by lmucassi         ###   ########.fr       */
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
