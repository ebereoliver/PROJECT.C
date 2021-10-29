/*LOGICAL OPERATORS*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter value a, b, c, d");
    scanf("%d, %d, %d, %d", &a, &b, &c, &d);

    if(a>b&&a!=0)
    {
     printf("&& operator:both conditions are true\n");
    }


    if(c>d||d!=c)
    {
     printf("|| operator:only one condition is true\n");
    }

    if(!(a>b&&a!=0)){
     printf("! operator:both conditions are true"
            "but status is inverted to false");
    }

    }
