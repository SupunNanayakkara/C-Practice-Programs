#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	
	if(n<0)
	{
		n = -1*n;
	}
	printf("Absolute Value = %d",n);
	return 0;
}
