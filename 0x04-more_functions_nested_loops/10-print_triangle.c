#include <stdio.h>
#include "main.h"

/**
*print_triangle - prints a triangle
*@size: the formal parameter
*Return: void function
*/

void print_triangle(int size)
{
	int side1;
	int side2;
	
	if (size > 0)
	{
		for (side1 = 0; side1 <= size; side1++)
		{
			for ((side2 = size - side1); side2 > 0; side2--)
			{
				putchar(' ');
			}
			for (side2 = 0; side2 < side1; side2++)
			{
				putchar('#');
			}
			if (side1 == size)
			{
				continue;
			}
		}
	}
}
