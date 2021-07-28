#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(b<c)
		{
			printf("%d is the largest number.",c);
		}
		else
		{
			printf("%d is the largest number.",b);
		}
	}
	else
	{
		if(a<c)
		{
			printf("%d is the largest number.",c);
		}
		else
		{
			printf("%d is the largest number.",a);
		}
	}
	return 0;
}
