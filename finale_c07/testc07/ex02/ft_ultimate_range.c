/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:55:34 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/30 15:42:23 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	b;
	int	x;
	int	*y;

	x = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	b = max - min;
	y = malloc (b * sizeof(int));
	if (!y)
	{
		*range = 0;
		return (-1);
	}
	*range = y;
	while (x < b)
	{
		y[x] = min + x;
		x++;
	}
	return (b);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
