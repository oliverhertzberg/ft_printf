/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:22:34 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/10/24 16:29:31 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void static	d_less_than_s(size_t len, unsigned char *d, unsigned char *s)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
}

void static	d_more_than_s(size_t len, unsigned char *d, unsigned char *s)
{
	size_t	i;

	i = len - 1;
	while (len > 0)
	{
		d[i] = s[i];
		i--;
		len--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dst == src || len == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst < src)
		d_less_than_s(len, d, s);
	else
		d_more_than_s(len, d, s);
	return (dst);
}
