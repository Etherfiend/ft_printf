/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:20:56 by muokcan           #+#    #+#             */
/*   Updated: 2024/11/18 14:20:56 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../include/print.h"

static void	detect(const char s, va_list args)
{
	if (!s)
		return ;
	if (s == 'c')
		print_char(va_arg(args, int));
	else if (s == 's')
		print_string(va_arg(args, char *));
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		res;

	va_start(args, s);
	while (*s)
	{
		if (*s++ == '%')
			detect(*s, args);
		else
			res += print_char(*s);
		s++;
	}

	va_end(args);
	return (res);
}
