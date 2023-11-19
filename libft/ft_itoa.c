/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:59:35 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/10/28 12:59:37 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	void	swap(char	*s)
{
	char	temp;
	int		start;
	int		end;

	temp = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}

static	int	count_num(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static	char	*putnbr(int n, char *s, int sign)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		s[i++] = ((n % 10) + '0');
		n /= 10;
	}
	if (sign == 2)
		s[i++] = '-';
	s[i] = '\0';
	return (s);
}

static	char	*min_int(void)
{
	char	*s;

	s = ft_calloc(12, sizeof(char));
	if (!s)
		return (NULL);
	ft_strlcpy(s, "-2147483648", 12);
	return (s);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*s;

	sign = 1;
	if (n < 0)
	{
		if (n == -2147483648)
			return (min_int());
		sign = 2;
		n *= -1;
	}
	s = ft_calloc((count_num(n)) + sign, sizeof(char));
	if (!s)
		return (0);
	if (n)
	{
		putnbr(n, s, sign);
		swap(s);
	}
	else
		s[0] = '0';
	return (s);
}
