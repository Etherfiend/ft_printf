/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:29:48 by muokcan           #+#    #+#             */
/*   Updated: 2024/11/26 16:34:19 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}

long	digit_counter(long n)
{
	int	i;

	i = 0;
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	else if (n == 0)
		return (1);
	if (n > 0)
	{
		while (n != 0)
		{
			n = n / 10;
			i++;
		}
	}
	return (i);
}

