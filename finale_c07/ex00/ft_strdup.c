/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:15:49 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/30 15:31:52 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		x;
	int		y;
	char	*z;

	x = 0;
	y = 0;
	while (src[y])
		y++;
	z = (char *)malloc(y * sizeof(char) + 1);
	if (!z)
		return (0);
	while (src[x])
	{
		z[x] = src[x];
		x++;
	}
	z[x] = '\0';
	return (z);
}
/*
#include <stdio.h>
int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = ft_strdup(str);
	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}*/
