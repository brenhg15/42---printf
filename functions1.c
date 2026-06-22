/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhernand <bhernand@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:02:41 by bhernand          #+#    #+#             */
/*   Updated: 2026/05/28 14:02:44 by bhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_add(unsigned long long ptr, char *base, int *count)
{
	if (ptr == 0)
		ft_putstr_pf("(nil)", count);
	else
	{
		ft_putstr_pf("0x", count);
		ft_putnbr_ptr(ptr, base, count);
	}
}

void	ft_putnbr_ptr(unsigned long long ptr, char *base, int *count)
{
	if (ptr < 16)
		ft_putchar_pf(base[ptr], count);
	if (ptr >= 16)
	{
		ft_putnbr_ptr(ptr / 16, base, count);
		ft_putnbr_ptr(ptr % 16, base, count);
	}
}

void	ft_putstr_pf(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_pf("(null)", count);
		return ;
	}
	while (str[i])
	{
		ft_putchar_pf(str[i], count);
		i++;
	}
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}
