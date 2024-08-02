#include <stdio.h>

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	y;

	ft_rev_int_tab(tab, size);
	y = 0;
	while (y < size)
	{
		printf("%d ", tab[y]);
		y++;
	}
	return (0);
}
