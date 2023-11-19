/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:33:41 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/10/25 16:41:52 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*recent;

	i = 0;
	recent = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			recent = (char *)(&s[i]);
		i++;
	}
	if (s[i] == (char)c)
	{
		recent = (char *)(&s[i]);
		return (recent);
	}
	return (recent);
}
