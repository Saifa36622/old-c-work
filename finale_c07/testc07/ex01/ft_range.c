/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:08:02 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/30 15:40:28 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	r;
	int	x;
	int	*y;

	if (min >= max)
		return (0);
	r = max - min;
	y = malloc(r * sizeof(int));
	if (!y)
		return (0);
	x = 0;
	while (x < r)
	{
		y[x] = min + x;
		x++;
	}
	return (y);
}
/*
#include <stdio.h>

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
