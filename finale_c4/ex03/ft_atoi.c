/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:00:57 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/24 15:14:26 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	hi(char *str, int *r)
{
	int	x;
	int	y;

	y = 0;
	x = 1;
	while ((str[y] >= 9 && str[y] <= 13) || str[y] == 32)
		y++;
	while (str[y] && (str[y] == 43 || str[y] == 45))
	{
		if (str[y] == 45)
			x *= -1;
		y++;
	}
	*r = y;
	return (x);
}

int	ft_atoi(char *str)
{
	int	x;
	int	y;
	int	z;

	y = 0;
	x = hi(str, &z);
	while (str[z] && str[z] >= 48 && str[z] <= 57)
	{
		y *= 10;
		y += str[z] - 48;
		z++;
	}
	y *= x;
	return (y);
}
