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

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define COLOR_RESET "\e[0m"

int				 	ft_printf(char *str, ...);
int					print_char(char c);
int					print_str(char *c);
int					print_int(int n);
unsigned int		print_unsignedint(unsigned int d);

#endif
