/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:39:30 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/30 15:44:32 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int	l_length(char **strings, int size, int sep_length)
{
	int	l_length;
	int	x;

	l_length = 0;
	x = 0;
	while (x < size)
	{
		l_length += ft_str_length(strings[x]);
		l_length += sep_length;
		x++;
	}
	l_length -= sep_length;
	return (l_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		x;
	char	*read_head;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = l_length(strs, size, ft_str_length(sep));
	string = ((char *)malloc((full_length + 1) * sizeof(char)));
	if (!string)
		return (0);
	read_head = string;
	x = 0;
	while (x < size)
	{
		ft_strcpy(read_head, strs[x]);
		read_head += ft_str_length(strs[x]);
		if (x < size - 1)
			ft_strcpy(read_head, sep);
			read_head += ft_str_length(sep);
		x++;
	}
	*read_head = '\0';
	return (string);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}*/
