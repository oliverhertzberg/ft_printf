/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:01:21 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/11/13 13:01:23 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putnum(int num)
{
	if (num < 0)
	{
		if (num == -2147483648)
		{
			if (write (1, "-2147483648", 11) == -1)
				return (-1);
			return (0);
		}
		num = -num;
		if (write(1, "-", 1) == -1)
			return (-1);
	}
	if (num > 9)
	{
		if (putnum(num / 10) == -1 || putnum(num % 10) == -1)
			return (-1);
	}
	else
	{
		num = num + '0';
		if (write(1, &num, 1) == -1)
			return (-1);
	}
	return (0);
}

int	printint(int num)
{
	if (putnum(num) == -1)
		return (-1);
	return (count_num(num));
}
