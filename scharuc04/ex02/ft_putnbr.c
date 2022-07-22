/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 04:00:41 by scharuka          #+#    #+#             */
/*   Updated: 2022/06/17 04:00:49 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	negativity_check(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	return (nb);
}

void	write_int_to_char(int nb)
{
	char	temp;

	temp = '0' + nb;
	write(1, &temp, 1);
}

void	ft_putnbr(int nb)
{
	int	position;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	nb = negativity_check(nb);
	position = 1;
	while ((nb / position) > 9)
	{
		position *= 10;
	}
	write_int_to_char(nb / position);
	nb = nb % position;
	position /= 10;
	while (position > 0)
	{
		write_int_to_char(nb / position);
		nb = nb % position;
		position /= 10;
	}
}
