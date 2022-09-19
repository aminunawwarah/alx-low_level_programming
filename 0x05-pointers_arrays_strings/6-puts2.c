#include "main.h"
#include <string.h>

/**
*puts2 -> is the main function
*@str: is the formal parameter of the function
*Return: returns nothing
*/
void puts2(char *str)
{
	int len;
	int i;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
