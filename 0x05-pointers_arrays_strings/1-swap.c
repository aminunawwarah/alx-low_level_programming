#include "main.h"

/**
*swap_int -> is the main function
*@a: is a formal parameter of the function
*@b: is another parameter of the function
*Return: returns nothing
*/
void swap_int(int *a, int *b)
{
	int tmp;
	a = 7;
	b = 9;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
