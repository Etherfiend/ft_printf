/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diu.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:38:13 by muokcan           #+#    #+#             */
/*   Updated: 2024/11/18 18:38:13 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

static	void putchar(int c)
{
	write(1, &c, 1);
}

void	print_int_decimal(int n)
{
	if (n == INT_MIN)
	{
		putchar('-');
		putchar('2');
		print_int_decimal(147483648);
	}
	else if (n < 0)
	{
		putchar('-');
		n = -n;
		print_int_decimal(n);
	}
	else if (n >= 10)
	{
		print_int_decimal(n / 10);
		print_int_decimal(n % 10);
	}
	else
	{
		putchar(n + '0');
	}
}

void	print_unsignedint(int d)
{

}
