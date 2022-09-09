#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints wheather is number is posite or negative
*
*Description: using the main function
*to print "Programming is positive, zero, or negative"
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*check if the value of n*/
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
