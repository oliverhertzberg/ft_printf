/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:04:13 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/11/19 16:06:02 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	puthex(unsigned long int num, char c)
{
	if (num > 15)
		if (puthex(num / 16, c) == -1 || puthex(num % 16, c) == -1)
			return (-1);
	if (num <= 9)
	{
		num = num + '0';
		if (write(1, &num, 1) == -1)
			return (-1);
	}
	else if (num <= 15)
	{
		if (c == 'x' || c == 'p')
		{
			if (write(1, &HEX_LOWER[num], 1) == -1)
				return (-1);
		}
		else
		{
			if (write(1, &HEX_UPPER[num], 1) == -1)
				return (-1);
		}
	}
	return (0);
}

int	printhex(unsigned long int num, char c)
{
	if (puthex(num, c) == -1)
		return (-1);
	return (count_hex(num));
}
