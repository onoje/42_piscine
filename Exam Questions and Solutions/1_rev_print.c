/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a string and displays the string in reverse
order followed by the newline.
Its prototype is constructed like this : 

char *ft_rev_print (char *str);

It must return its argument

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_rev_print (char *str)
{
    int len = ft_strlen(str);
 
    while (0 <= len)
    {
        write(1, &str[len], 1);
        len--;
    }
    write(1, "\n", 1);
    return(str);
}

/*
int main (void)
{
    ft_rev_print("elif");
}
*/
