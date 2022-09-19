#include "main.h"
#include <stdio.h>

/**
*print_rev -> is the main function
*@s: is the formal parameter of the function
*Return: returns nothing
*/
void print_rev(char *s)
{
	int i;
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	for (i = (n - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
