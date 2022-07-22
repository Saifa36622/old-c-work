/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:45:12 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/23 15:43:45 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lenght(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	y;
	unsigned int	z;

	y = 0;
	z = lenght(src);
	if (size < 1)
		return (z);
	while (src[y] != '\0' && y < size - 1)
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (z);
}
