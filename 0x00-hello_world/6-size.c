#include <stdio.h>

/**
*main - prints a string of text to the console
*
*Description: using the main function
*This program prints some text
*multilingual puzzle
*Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	
	printf("Size of a char: %1d byte(s)\n", sizeof(c));
	printf("Size of an int: %1d byte(s)\n", sizeof(i));
	printf("Size of a long int: %1d byte(s)\n", sizeof(li));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(lli));
	printf("Size of a float: %1d byte(s)\n", sizeof(f));
	return(0);
}
