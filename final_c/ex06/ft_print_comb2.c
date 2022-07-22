/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:11:15 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/13 13:34:09 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write2(char z)
{
	write(1, &z, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = -1;
	while (x <= 97)
	{
		x++;
		y = x;
		while (y <= 98)
		{
			y++;
			write2 ((x / 10) + '0');
			write2 ((x % 10) + '0');
			write2 (' ');
			write2 ((y / 10) + '0');
			write2 ((y % 10) + '0');
			if (x != 98 || y != 99)
			{
				write2 (',');
				write2 (' ');
			}
		}
	}
}