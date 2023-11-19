/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:47:02 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/10/26 22:10:40 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len || len == 0 || !s)
		return ((char *)ft_calloc(1, 1));
	s_len = ft_strlen(s + start);
	if (s_len > len)
		s_len = len;
	sub = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while ((s[i + start]) && i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
