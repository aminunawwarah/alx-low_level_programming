#include "main.h"

/**
*reverse_array - reverses the content of an array
*@a is the function parameter
*@n is another parameter of the function
*Returns: nothing
*/
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < (n / 2); x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
