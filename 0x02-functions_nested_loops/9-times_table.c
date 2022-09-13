#include "main.h"

/**
*times_table - prints with putchar
*Description: This program prints
*timestable
*function
*Return: 0
*/
void times_table(void)
{
	int number;
	int multiple;
	int product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');
		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');
			product = number * multiple;
			if (product <= 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
