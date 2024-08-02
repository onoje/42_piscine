/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return(i);
}

char    *ft_strrev(char *str)
{
    char temp;
    int i = 0;
    int len = ft_strlen(str) - 1;

    while (len > 0)
    {
        temp = str[len];
        str[len] = str[i];
        str[i] = temp;
        len--;
        i++;
    }
    return (str);

}

/*
#include <stdio.h>
int main()
{
    char x[10] = "elif";
    printf("%s", ft_strrev(x));
}
*/
