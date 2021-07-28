#include<stdio.h>

int main()
{
	int a,b,c,x,y;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	
	x = (a<b?b:a);
	y = (x<c?c:x);
	
	printf("%d is the largest number.",y);
	return 0;
}
