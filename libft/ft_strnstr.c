/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:41:03 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/10/26 18:30:58 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	char	*nsearch(size_t n_len, char *h, const char *needle, size_t len)
{
	size_t	i;
	size_t	count;

	i = 0;
	while (h[i] && i < len)
	{
		count = 0;
		while (h[i + count] == needle[count] && ((i + count) < len))
		{
			count++;
			if (count == n_len)
				return (&h[i]);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	n_len = 0;
	if (needle[0] == '\0' || needle == (char *)haystack)
		return ((char *)haystack);
	if (len <= 0)
		return (NULL);
	while (needle[n_len])
		n_len++;
	return (nsearch(n_len, (char *)haystack, needle, len));
}
