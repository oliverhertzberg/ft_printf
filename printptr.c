/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:32:14 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/11/14 22:32:26 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printptr(unsigned long int num)
{
	if (write(1, "0x", 2) == -1)
		return (-1);
	if (printhex(num, 'p') == -1)
		return (-1);
	return (count_hex(num) + 2);
}
