/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:13:35 by muokcan           #+#    #+#             */
/*   Updated: 2024/11/25 15:13:35 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTH_H
# define PRINTH_H

int	ft_printf(char *str, ...);
int	print_char(char c);
int	print_str(char *c);
int	print_int(int n);
int	print_unsignedint(unsigned int d);

#endif
