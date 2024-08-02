#include <stdio.h>

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 77;
	num2 = 22;
	printf("before num1: %i\n", num1);
	printf("before num2: %i\n", num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("after num1: %i\n", num1);
	printf("after num2: %i\n", num2);
	return (0);
}
