/*Arithmetic Operators division and addition-User friendly Program*/
#include <stdio.h>
int main()
{
    int x, y, addition, division;
    printf("\n Enter value to x\t");
    scanf("%d", &x);
    printf("/n Enter value to y\t");
    scanf("%d", &y);
    addition=x+y;
    division=x/y;
	printf("\n addition=%d", addition);
    printf("\n division=%d",division);
    return 0;
}


