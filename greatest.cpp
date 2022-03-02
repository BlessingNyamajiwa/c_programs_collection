#include <stdio.h>

int main(){
	int num1, num2, num3;
	
	//	Obtain user input
	printf("\nEnther value of num1, num2 and num3: ");
	
	// Store entered values in variables for comparison
	scanf("%d %d %d",&num1, &num2, &num3);
	
	//	Compare values
	if((num1>num2) &&(num1>num3))
	{
		printf("\nNum1 is the greatest.");
	}
	else if((num2>num3) &&(num2>num1))
	{
		printf("\nNum2 is the greatest");
	}
	else
	{
		printf("\nNum3 is the greatest");
	}
	return 0;
}
