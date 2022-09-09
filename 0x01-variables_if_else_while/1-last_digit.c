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
	int n;
	int lastNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNumber = n % 10;
	/*The comparison begins here...*/
	if (lastNumber > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNumber);
	}
	else if (lastNumber == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNumber);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastNumber);
	}
	return (0);
}
