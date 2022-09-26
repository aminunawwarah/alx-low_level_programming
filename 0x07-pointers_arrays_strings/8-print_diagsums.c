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
	int sum1 = 0;
	int sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++);
	{
		sum2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
