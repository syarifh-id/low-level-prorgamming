#include <stdio.h>

int main(){
	int myAge = 22;  //no decimals
	float point = 9.5; //with decimals
	char initials = 'S'; // with '' single quote

//Note: If you assign a new value to an existing variable, it will overwrite the previous value:
	myAge = 23;

/*
Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.

A format specifier starts with a percentage sign %, followed by a character.

For example, to output the value of an int variable, you must use the format specifier %d or %i surrounded by double quotes, inside the printf() function:
*/

printf("%d\n", myAge);printf("%f\n", point); printf("%c\n", initials);

printf("my letter is %c and my age is %d", initials, myAge);
return 0;

}