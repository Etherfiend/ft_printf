/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diu.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:11:58 by muokcan           #+#    #+#             */
/*   Updated: 2024/11/25 15:11:58 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/utils.h"
#include <unistd.h>
#include <limits.h>

int	print_int(int n)
{
	int	n_digit;

	n_digit = n;
	if (n == INT_MIN)
	{
		ft_putchar('-');
		ft_putchar('2');
		print_int(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		print_int(n);
	}
	else if (n >= 10)
	{
		print_int(n / 10);
		print_int(n % 10);
	}
	else
		ft_putchar(n + '0');
	return (digit_counter(n_digit));
}

int	print_unsignedint(unsigned int d)
{
	if (d >= 10)
		print_unsignedint(d / 10);
	ft_putchar((d % 10) + '0');
	return (digit_counter(d));
}
