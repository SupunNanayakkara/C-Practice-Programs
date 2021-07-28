#include<stdio.h>

int main()
{
	int temp;
	printf("Enter the value: ");
	scanf("%d",&temp);
	if(temp>50)
	{
		printf("Invalid.");
		exit(0);
	}
	if(temp<30)
	{
		printf("Wear the down jacket 1");
	}
	else
	{
		printf("No need to worry about the jacket");
	}
	return 0;
}
