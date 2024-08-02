#include <stdio.h>

int	main(void)
{
	int	num1;
	int	num2;
	int	divide;
	int	remain;

	num1 = 77;
	num2 = 22;
	ft_div_mod(num1, num2, &divide, &remain);
	printf("divide: %i\n", divide);
	printf("mod: %i\n", remain);
	return(0);
}
