#include <stdio.h>
#include "main.h"

/**
*print_square - displays square
*@size: the function parameter
*Return: void function
*/

void print_square(int size)
{
	int up;
	int down;

	if (size > 0)
	{
		for (up = 0; up < size; up++)
		{
			for (down = 0; down < (size - 1); down++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
