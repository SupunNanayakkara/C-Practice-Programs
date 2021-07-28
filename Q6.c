#include<stdio.h>

int main()
{
	float ftemp1,ctemp1,ftemp2,ctemp2;
	
	printf("Enter Centrigade value: ");
	scanf("%f",&ctemp1);
	printf("Enter Fahrenheit value: ");
	scanf("%f",&ftemp2);
	
	ftemp1 = ((ctemp1 * 9)/5) + 32;
	printf("Fahrenheit value = %.2f\n",ftemp1);
	
	ctemp2 = ((ftemp2 - 32)*5)/9 ;
	printf("Centrigade value = %.2f\n",ctemp2);
	
	return 0;
}
