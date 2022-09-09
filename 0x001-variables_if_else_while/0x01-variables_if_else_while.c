#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints wheather is number is posite or negative
*
*Description: using the main function
*to print "Programming is positive, zero, or negative"
*Return 0
*/
int main(void)
{
	int wholeNumber;
	
	srand(time(0));
	wholeNumber = rand() - RAND_MAX / 2;
	/*check if the value of n*/
	if (wholeNumber > 0)
	{
		printf("%i is positive\n", wholeNumber);
	}
	else if (wholeNumber == 0)
	{
		printf("%i is zero\n", wholeNumber);
	}
	else if (wholeNumber < 0)
	{
		printf("%i is negative\n", wholeNumber);
	}
	return (0);
}
