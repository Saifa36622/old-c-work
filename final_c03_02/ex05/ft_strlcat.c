/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:23:05 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/28 21:58:26 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*x;
	char			*y;
	unsigned int	z;
	unsigned int	r;

	x = dest;
	y = src;
	r = size;
	while (r-- != 0 && x != '\0')
		x++;
	z = x - dest;
	r = size - z;
	if (r == 0)
		return (z + ft_strlen(src));
	while (*src != '\0')
	{
		if (r > 1)
			x++ = *src;
			r--;
		src++;
	}
	x = '\0';
	return (z + (src - y));
}
