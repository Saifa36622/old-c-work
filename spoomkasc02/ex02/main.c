#include <stdio.h>
#include "ft_str_is_alpha.c"

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d\n%d\n%d", ft_str_is_alpha("Testing"), ft_str_is_alpha("Test?ing"), ft_str_is_alpha(""));
}
