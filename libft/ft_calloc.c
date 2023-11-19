/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:07:12 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/10/26 18:26:15 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*p;
	size_t	max_t;

	max_t = 0;
	max_t -= 1;
	if (count > 0 && size > 0 && ((max_t / count) < size))
		return (NULL);
	i = 0;
	p = malloc(size * count);
	if (!p)
		return (NULL);
	while (i < (count * size))
	{
		((char *)p)[i++] = 0;
	}
	return (p);
}
