/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:11:49 by muokcan           #+#    #+#             */
/*   Updated: 2024/11/25 15:11:49 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdarg.h>

static int	detect(char c, va_list args)
{
	if (c == '%')
		return (print_str("%"));
	else if (c == 'c' || c == 's')
		return (print_str(va_arg(args, char *)));
	else if (c == 'p')
		return (print_str(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (print_int(va_arg(args, int)));
	else if (c == 'u')
		return (print_unsignedint(va_arg(args, unsigned int)));
	else if (c == 'x')
		return ();
	else if (c == 'X')
		return ();
	return (-1);
}

int	ft_printf(char *str, ...)
{
	va_list args;
	int	res;
	int	temp;

	va_start(args, str);
	res = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			temp = detect(*str, args);
			if (temp == -1)
				return (-1);
			res += temp;
		}
		else
			res += print_char(*str);
		str++;
	}
	va_end(args);
	return (res);
}
