#include <stdio.h>
#include <string.h>
#include "ft_strncpy.c"

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	txt[10];
	char	txt2[10];

	ft_strncpy(txt, "testing", 7);
	printf("%s\n", txt);
	strncpy(txt2, "testing", 7);
	printf("%s\n", txt2);
}
