/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:23:02 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/30 23:32:22 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "ft_stock_str.h"

int	strlength(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

char	*ft_strdup(char *src)
{
	int		x;
	char	*dest;

	x = 0;
	dest = (char *)malloc(strlength(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					x;
	struct s_stock_str	*array;

	ac = ac + 0;
	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		array[x].size = strlength(av[x]);
		array[x].str = av[x];
		array[x].copy = ft_strdup(av[x]);
		x++;
	}
	array[x] = (struct s_stock_str){0, 0, 0};
	return (array);
}
