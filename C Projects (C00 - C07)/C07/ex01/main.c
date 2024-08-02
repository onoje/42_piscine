#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i = 0;
	int	min = 3;
	int	max = 9;
	int	size = max - min;

	range = ft_range(min, max);
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
}
