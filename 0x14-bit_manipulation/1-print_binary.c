#include "main.h"

/**
*print_binary - prints the base two of a number
*@n: the number to be converted
*Return: void
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

_	putchar((n & 1) + '0');
}
