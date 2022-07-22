/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 06:46:32 by scharuka          #+#    #+#             */
/*   Updated: 2022/06/17 15:25:23 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' )
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r' )
		return (1);
	else
		return (0);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	match(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*negative_check(int *negativity, char *str)
{
	while (*str == '+' || *str == '-')
	{
		if (*str == '-' )
			*negativity *= -1;
		str++;
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	int	b;
	int	ans;
	int	negativity;
	int	temp;

	ans = 0;
	negativity = 1;
	b = check_base(base);
	if (!b)
		return (0);
	while (is_blank(*str))
		str++;
	str = negative_check(&negativity, str);
	temp = match(*str, base);
	while (temp != -1)
	{
		ans *= b;
		ans += temp;
		str++;
		temp = match(*str, base);
	}
	return (ans * negativity);
}
/*
int    main(void)
{
        printf("%d\n", ft_atoi_base("  \f\n\r\t\v---+++--74CBB1z",
	"0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("  8888v", "0123456789"));
	printf("%d\n", ft_atoi_base("-123456", "0123456789"));
        fflush(stdout);
        printf("%d\n", ft_atoi_base("11110001001000000", "01"));
        fflush(stdout);
        printf("%d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
        fflush(stdout);
}*/
