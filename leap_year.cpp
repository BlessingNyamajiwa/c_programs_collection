#include <stdio.h>

int main()
{
	// declare an integer value for the year
	int year = 0;
	
	// prompt and receive user input
	printf("Type in a year e.g. 1984\n");
	scanf("%d",&year);
	
	
	// check if year is divisible by 4
	if(year%4 == 0){
		printf("Year is a leap year.");	
	}else{
		printf("Not a leap year.");
	}
	
	return 0;
}

