/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 13:42:41 by lmucassi          #+#    #+#             */
/*   Updated: 2017/12/06 14:56:01 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int n;

	i = 0;
	neg = 1;
	n = 0;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+' && neg != -1)
		i++;
	while (str[i] > 47 && str[i] < 58)
	{
		n = n * 10;
		n = n + (str[i] - '0');
		i++;
	}
	return (n * neg);
}
