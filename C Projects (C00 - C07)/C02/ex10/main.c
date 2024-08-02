#include <stdio.h>

int	main(void)
{
	char	src[] = "Duran";
	char	dest[] = "Elif";

	printf ("%d | %s", ft_strlcpy(dest, src, 10), dest);
}