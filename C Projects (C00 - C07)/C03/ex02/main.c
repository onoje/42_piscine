#include <stdio.h>

int	main(void)
{
	char	dest[12] = "Elif, ";
	char	src[] = "Duran";

	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}
