#include <stdio.h>

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 22;
	num2 = 77;
	printf("before change num1: %i\n", num1);
	printf("before change num2: %i\n", num2);
	ft_swap(&num1, &num2);
	printf("after change num1: %i\n", num1);
	printf("after change num2: %i\n", num2);
	return (0);
}
