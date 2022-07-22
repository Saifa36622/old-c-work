/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:39:57 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/14 15:38:57 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write2(char z)
{
	write(1, &z, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write2('-');
		write2('2');
		ft_putnbr(147483648);
	}
	else if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else if (nb <  0)
	{
		write2('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else
	{
		write2(nb + 48);
	}
}
int main (void)
{
	ft_putnbr(4563);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);

}
