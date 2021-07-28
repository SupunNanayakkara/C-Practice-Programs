#include<stdio.h>

int main()
{
	int m1,m2,m3,avg;
	printf("Enter the marks of 1st subject: ");
	scanf("%d",&m1);
	printf("Enter the marks of 2nd subject: ");
	scanf("%d",&m2);
	printf("Enter the marks of 3rd subject: ");
	scanf("%d",&m3);
	
	avg = (m1+m2+m3)/3;
	
	if(m1<0||m2<0||m3<0)
	{
		printf("Invalid Input.");
	}
	else if(avg>=70)
	{
		printf("Very Good");
	}
	else if(avg>=55)
	{
		printf("Good");
	}
	else if(avg>=40)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
