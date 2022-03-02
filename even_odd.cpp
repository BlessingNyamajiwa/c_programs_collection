#include<stdio.h>

int main()
{
	int num;
	
	//	Ask for user input
	printf("Type in a whole number: ");
	scanf("%d",&num);
	
	//	Test if even or odd
	if(num%2 == 0)
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
	return 0;
}

