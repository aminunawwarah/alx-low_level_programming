#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - compares numbers
*
*Description: The program compares numbers and
*prints if one is greater than, less than,
*or equal to the other operand.
*Return: 0
*/
int main(void)
{
	int wholeNumber;
	int lastNumber;
	
	srand(time(0));
	wholeNumber = rand() - RAND_MAX / 2;
	lastNumber = wholeNumber % 10;
	/*The comparison begins here...*/
	if (lastNumber > 5)
	{
		printf("Last digit of %d is %d and is greater than 5.\n", wholeNumber, lastNumber);
	}
	else if (lastNumber == 0)
	{
		printf("Last digit of %d is %d and is 0.\n", wholeNumber, lastNumber);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0.\n", wholeNumber, lastNumber);
	}
	return (0);
}
