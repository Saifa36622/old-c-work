#include <stdio.h>
#include "ft_strcpy.c"

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	txt1;
	
	ft_strcpy(&txt1, "testing");
	printf("%s", &txt1);
}
