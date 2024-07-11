/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagharbi <aagharbi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:09:52 by aagharbi          #+#    #+#             */
/*   Updated: 2024/07/09 14:44:18 by aagharbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_recursivity(int nb)
{
	if (nb < 0)
	{
		ft_write('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_recursivity(nb / 10);
	}
	ft_write(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
    else
    {
        ft_putnbr_recursivity(nb);
    }
}
