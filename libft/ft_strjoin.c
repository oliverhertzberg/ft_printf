/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:39:39 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/10/27 12:39:40 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		s1_len;
	int		s2_len;
	char	*new_s;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	new_s = (char *)malloc((s1_len + s2_len) + 1);
	if (!new_s)
		return (NULL);
	while (j < s1_len)
		new_s[i++] = s1[j++];
	j = 0;
	while (j < s2_len)
		new_s[i++] = s2[j++];
	new_s[i] = '\0';
	return (new_s);
}
