#include<stdio.h>
float area(float r);
float pi=3.142;
float r;
int main()
{
    float volume;
    volume=pi*area(r);
    printf("\n the value of volume %f", volume);
    return 0;
}
float area(float r)
{
 float answer;
	printf(" enter the value r");
	scanf("%f", &r);
 answer=4.0/3.0*r*r*r;
	printf("\n answer %f", answer);
 return answer;
}
