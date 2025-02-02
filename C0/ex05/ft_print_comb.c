/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagharbi <aagharbi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:48:05 by aagharbi          #+#    #+#             */
/*   Updated: 2024/06/27 21:14:01 by aagharbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int c[3])
{
	int		d;
	int		e;

	d = ',';
	e = ' ';
	if (c[0] == '7')
	{
		write(1, &c[0], 1);
		write(1, &c[1], 1);
		write(1, &c[2], 1);
	}
	else
	{
		write(1, &c[0], 1);
		write(1, &c[1], 1);
		write(1, &c[2], 1);
		write(1, &d, 1);
		write(1, &e, 1);
	}
}

void	ft_print_comb(void)
{
	int		c[3];

	c[0] = '0';
	c[1] = '1';
	c[2] = '2';
	while (c[0] <= '7')
	{
		c[1] = c[0] + 1;
		while (c[1] <= '8')
		{
			c[2] = c[1] + 1;
			while (c[2] <= '9')
			{
				ft_print(c);
				c[2]++;
			}
			c[1]++;
		}
		c[0]++;
	}
}
