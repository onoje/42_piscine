#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Elif";
	char	dest[15];

	printf ("%s\n", ft_strncpy(dest, src, 3));
	printf ("%s\n", strncpy(dest, src, 3));
	return (0);
}