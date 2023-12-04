//type conversion
#include <stdio.h>
int main()
{
	
	// Automatic conversion: int to float

	float myFloat = 9;

	printf("%f", myFloat); // 9.000000 

	// Automatic conversion: float to int
	int myInt = 9.99;

	printf("%i", myInt); // 9 

	// Manual conversion: int to float
float sum = (float) 5 / 2;

printf("%f", sum); // 2.500000 


//also can add before variable
int num1 = 5;
int num2 = 2;
float sum = (float) num1 / num2;

printf("%f", sum); // 2.500000 

	return 0;
}

