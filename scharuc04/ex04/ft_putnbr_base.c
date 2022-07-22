/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 04:41:38 by scharuka          #+#    #+#             */
/*   Updated: 2022/06/17 06:05:57 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<limits.h>

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b;

	b = check_base(base);
	if (!b)
		return ;
	if (nbr == -2147483648)
	{
		ft_putnbr_base((nbr / b), base);
		write(1, &base[-(nbr % b)], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= b)
		ft_putnbr_base((nbr / b), base);
	write(1, &base[nbr % b], 1);
}
/*
int		main(void)
{
	ft_putnbr_base(-123456, "helo");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(INT_MAX, "0123456789");
}*/
