#include "stdio.h"

//1, 1, 2, 3, 5, 8, 13, 21, 34, 55....

int     ft_fibonacci(int x)
{
    int     puesto; 
    int     temp;
    int     temp2;
    int     temp3;

    puesto = 1;
    temp = 1;
    temp2 = 0;
    if (x <= 0)
        return(0);
    while(puesto <= x)
    { 
        temp3 = temp + temp2;
        temp = temp2;
        temp2 = temp3;
        puesto++;
    }
    return(temp3);
}

int main()
{
    int puesto;
    int fibonacci;

    puesto = 2;
    fibonacci = ft_fibonacci(puesto);
    printf("En el puesto %d está el número %d\n", puesto, fibonacci);
    return (0);
}