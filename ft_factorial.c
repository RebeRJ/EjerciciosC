#include "stdio.h"

static int  ft_factorial(int x)
{
    int     i;
    int     num;

    i = x;
    num = 1;
    while(i >= 1)
    {
        num = num * i;
        i--;
    }
    return(num);
}

int main()
{
    int i;
    int fact;

    i = 6;
    fact = ft_factorial(i);
    printf("El factorial de %d es %d \n", i, fact);
    return (0);
}