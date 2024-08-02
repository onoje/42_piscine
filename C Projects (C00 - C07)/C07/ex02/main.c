#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i = 0;
	int	min = 3;
	int	max = 9;
	int	size;

	size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n%d", size);
}
