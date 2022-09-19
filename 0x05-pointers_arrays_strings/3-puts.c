#include "main.h"
#include <stdio.h>

/**
*_puts -> is the main function
*@str: is the formal parameter of the function
*Return: returns nothing
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
