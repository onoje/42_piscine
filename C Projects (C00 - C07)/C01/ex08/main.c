#include <stdio.h>

int	main(void)
{
	int	tab[5] = {5, 4, 2, 1, 3};
	int	size = 5;
	int	y;

	ft_sort_int_tab(tab, size);
	y = 0;
	while (y < size)
	{
		printf("%d ", tab[y]);
		y++;
	}
	return (0);
}
