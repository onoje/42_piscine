#include <stdio.h>

int	main(void)
{
	char	str[] = "elif duran";
	char	to_find[] = "dur";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}
