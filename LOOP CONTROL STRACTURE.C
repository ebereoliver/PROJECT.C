#include <stdio.h>

int main()
{
	int maths, english, kiswahili, biology,physics,average;
    printf("enter marks of maths, english, kiswahili, biology, physics");
	scanf("%d%d%d%d%d", &maths, &english, &kiswahili, &biology, &physics);
	average=(maths+english+kiswahili+biology+physics)/5;
	printf("average=%d", average);
	if(average>=90&&average<=100)
	{
	printf("Grade A");	
	}
	else if(average>=80&&average<90)
	{
	printf("Grade B");
	}
	else if(average>=70&&average<80)
	{
	printf("Grade C");	
	}
	else if(average>=60&&average<70)
	{
	printf("Grade D");	
	}
	else if(average>=50&&average<60)
	{
	printf("Grade E");	
	}
	else if(average<50)
	{
	printf("Fail");	
	}
	return 0;
}
  
