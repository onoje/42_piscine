/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }
    while (str[i] <= '9' && str[i] >= '0')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
    return (0);
}
*/