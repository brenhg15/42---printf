/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhernand <bhernand@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:34:03 by bhernand          #+#    #+#             */
/*   Updated: 2026/05/29 13:34:05 by bhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_pf(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putnbr_pf(int nbr, int *count)
{
	long	nb;

	nb = (long)nbr;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_pf('-', count);
	}
	if (nb < 10)
		ft_putchar_pf(nb + '0', count);
	if (nb >= 10)
	{
		ft_putnbr_pf(nb / 10, count);
		ft_putnbr_pf(nb % 10, count);
	}
}

void	ft_putnbr_pf_base(unsigned int nbr, char *base, int *count)
{
	long	nb;
	int		length;

	length = ft_strlen(base);
	if (length < 2)
		return ;
	nb = nbr;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_pf('-', count);
	}
	if (nb < length)
		ft_putchar_pf(base[nb], count);
	if (nb >= length)
	{
		ft_putnbr_pf_base(nb / length, base, count);
		ft_putnbr_pf_base(nb % length, base, count);
	}
}
