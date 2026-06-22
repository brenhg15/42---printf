/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhernand <bhernand@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:04:42 by bhernand          #+#    #+#             */
/*   Updated: 2026/05/28 14:04:52 by bhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

void	ft_putchar_pf(char c, int *count);
void	ft_putstr_pf(char *str, int *count);
void	ft_check(va_list args, char *string, int i, int *count);
int		ft_printf(const char *format, ...);
void	ft_putnbr_pf(int nbr, int *count);
void	ft_putnbr_pf_base(unsigned int nbr, char *base, int *count);
void	ft_print_add(unsigned long long ptr, char *base, int *count);
void	ft_putnbr_ptr(unsigned long long ptr, char *base, int *count);
int		ft_strlen(char *base);

#endif
