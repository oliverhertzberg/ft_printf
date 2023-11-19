/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:36:21 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/10/25 15:57:11 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	total;

	i = 0;
	j = 0;
	if (!dest && size == 0)
		return (ft_strlen(src));
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0')
		j++;
	total = i + j;
	if (i >= size)
		return (total);
	j = 0;
	while (src[j] != '\0' && (i + j) < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (total);
}
