#include "main.h"

/**
*largest_number -  returns the larges of 3 numbers
*@a: formal parameter for the first integer
*@b: formal parameter for the second integer
*@c: formal parameter for the third integer
*Return: largestNumber
*/
int largest_number(int a, int b, int c)
{
	int largestNumber;

	if ((a >= b) && (a >= c))
	{
		largestNumber = a;
	}
	else if ((b >= a) && (b >= c))
	{
		largestNumber = b;
	}
	else
	{
		largestNumber = c;
	}
	return (largestNumber);
}
