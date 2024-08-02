#include <stdio.h>

int	main(void)
{
	char	src[] = "elif";
	char	dest[10];
	
	printf("copied string: %s", ft_strcpy(dest, src));
	return (0);
}