/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:32:45 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/11/14 22:32:52 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printstr(char *str)
{
	int	count;
	int	i;

	if (!str)
		return (write(1, "(null)", 6));
	count = 0;
	i = 0;
	while (str[i])
	{
		count += write(1, &str[i++], 1);
		if (count != i)
			return (-1);
	}
	return (count);
}
