/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:52:50 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/10/28 18:52:51 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	char			*new_s;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	len = 0;
	while (s[len])
		len++;
	new_s = ft_calloc(len + 1, sizeof(char));
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = (f)(i, s[i]);
		i++;
	}
	return (new_s);
}
