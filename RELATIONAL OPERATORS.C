/*RELATIONAL OPERATORS*/
#include <stdio.h>
int main()
{
   int m, n;
   printf("enter value m, n");
   scanf("%d,%d", &m, &n);
   if(m==n)
   {
    printf("m and n are equal\n");
   }
   else
   {
   printf("m not equal to n\n");
   }

   if(m>n)
   {
   printf("m is greater than n\n");
   }
   else
   {
   printf("m is less than n\n");
   }

   if(m>=n)
   {
    printf("m is greater than or equal to n\n");
   }
   else
   {
   printf("m is less than or equal to n\n");
   }
return 0;
}
