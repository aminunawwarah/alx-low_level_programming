#include "main.h"
#include <stdio.h>

/**
*print_diagsums - is the function of program
*@*a: is a formal parameter
*@size: is another formal parameter
*Return: a void function
*/
void print_diagsums(int *a, int size)
{
	int index;
	int size;
	int sum1 = 0;
	int sum2 = 0;

	size = 0;
	sum1 = 0;
	sum2 = 0;
	size = (size * size) - 1;

	for (index = 0; index < size; index = index + (size + 1))
	{
		sum1 += a[index];
	}
	for (index = (size - 1); index < size; index = index + (size - 1))
	{
		sum2 += a[index];
	}
	printf("%d, %d\n", sum1, sum2);
}
