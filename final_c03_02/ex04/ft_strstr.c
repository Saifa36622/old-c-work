/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:12:49 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/22 20:20:56 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (to_find[y] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		while (str[x + y] == to_find[y] && str[x + y] != '\0')
			y++;
		if (to_find[y] == '\0')
			return (str + x);
	x++;
	y = 0;
	}
	return (0);
}
