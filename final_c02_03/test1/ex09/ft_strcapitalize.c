/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:35:18 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/30 17:38:23 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_alpha(char *str)
{
	int		x;
	bool	d;
	char	r;

	x = 0;
	d = true;
	while (true)
	{
		r = str[x];
		if (r == '\0')
		{
			break ;
		}
		if (!((r >= 'A' && r <= 'Z') || (r >= 'a' && r <= 'z')))
		{
			d = false;
			break ;
		}
		x++;
	}
	return (d);
}
