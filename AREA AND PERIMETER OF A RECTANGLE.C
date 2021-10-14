/*area and perimeter of a rectangle*/
#include <stdio.h>

int main()
{
    int length, width, perimeter, area;
    printf("\n enter lentht\t");
    scanf("%d", &length);//input length
    printf("\n enter width\t");
    scanf("%d",&width);//input width
    perimeter=(length+width)*2;//formula for calculating perimeter of a rectangle
    area=length*width;//formula for calculating area of a rectangle
    printf("\n perimeter=%d", perimeter);
    printf("\n area=%d", area);
    return 0;
}

