#include <stdio.h>

int	main(void)
{
	char	dest[12] = "Elif, ";
	char	src[] = "Duran";

	ft_strncat(dest, src, 3);
	printf("%s", dest);
	return (0);
}
