/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 04:02:07 by scharuka          #+#    #+#             */
/*   Updated: 2022/06/17 04:40:47 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' )
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r' )
		return (1);
	else
		return (0);
}

int	is_operator(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	ans;
	int	negativity;

	negativity = 1;
	while (is_blank(*str))
		str++;
	while (is_operator(*str))
	{
		if (*str == '-' )
			negativity *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = (ans * 10) + (*str - '0');
		str++;
	}
	return (ans * negativity);
}
/*
int	main(void)
{
	char *str;

	str = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
}*/
