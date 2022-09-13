#include "main.h"

/**
*print_last_digit- prints with putchar
*@n: is the formal parameter of the function.
*Description: This program prints
*some characters with putchar
*function
*Return: 0
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
