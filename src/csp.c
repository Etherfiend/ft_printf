/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:58:25 by muokcan           #+#    #+#             */
/*   Updated: 2024/11/18 16:58:25 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char *c)
{
	write(1, &c, 1);
}

void	print_string(char *s)
{
	while (*s)
		write(1, &s, 1);
}

void	print_adress(void *p)
{
	write(1, p, 1);
}
