#include <stdio.h>

int	main(void)
{
	char	x[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(x));
	return (0);
}