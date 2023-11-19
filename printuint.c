/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printuint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:49:48 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/11/16 18:49:49 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putunum(unsigned int num)
{
	if (num > 9)
	{
		if (putunum(num / 10) == -1 || putunum(num % 10) == -1)
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

int	printuint(unsigned int num)
{
	if (putunum(num) == -1)
		return (-1);
	return (count_num(num));
}
