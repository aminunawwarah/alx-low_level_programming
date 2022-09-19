#include "main.h"

/**
*puts_half -> is the main function
*@str: is the formal parameter of the function
*Return: returns nothing
*/
void puts_half(char *str)
{
	int x;
	int y;
	int i;

	x = strlen(str);

	if(x % 2 == 1)
	{
		y = x / 2 + 1;
	}
	else
	{
		y = x / 2;
	}
	for (i = y; i < x; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
