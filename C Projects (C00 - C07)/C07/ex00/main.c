#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*new_str;

	str = "elif";
	new_str = ft_strdup(str);
	printf("%s\n", new_str);
	return (0);
}
