#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints a long diagonal
*@n: function parameter
*Return: a void function
*/

void print_diagonal(int n)
{
	int lenght;
	int space;
	
	if (n > 0)
	{
		for (lenght = 0; lenght < n; lenght++)
		{
			for (space = 0; space < lenght; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (lenght == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
