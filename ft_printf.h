/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:56:45 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/11/15 18:56:49 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEX_UPPER "0123456789ABCDEF"
# define HEX_LOWER "0123456789abcdef"

int	ft_printf(const char *str, ...);
int	printchar(char c);
int	printstr(char *str);
int	printhex(unsigned long int num, char c);
int	count_num(long int num);
int	count_hex(unsigned long int num);
int	printint(int num);
int	printptr(unsigned long int num);
int	printuint(unsigned int num);

#endif
