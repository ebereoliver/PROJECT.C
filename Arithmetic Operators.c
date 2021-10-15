#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, addition, subtraction, multiplication, division,modulus;
    printf("enter value a, b");
    scanf("%d,%d", &a,&b);

    addition=a+b;
    subtraction=a-b;
    multiplication=a*b;
    division=a/b;
    modulus=a%b;

    printf("addition=%d\n", addition);
    printf("subtraction=%d\n",subtraction);
    printf("multiplication=%d\n", multiplication );
    printf("division=%d\n", division);
    printf("modulus=%d", modulus);

    return 0;
}

