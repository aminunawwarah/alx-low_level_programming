#include "main.h"

/**
*more_numbers - print 10x some numbers
*Return - returns some value
*/

void more_numbers(void)
{
	int loop;
	int real;
	
	for (real = 0; real < 10; real++)
	{
		for (loop = 0; loop < 14; loop++)
		{
			if (loop >= 10)
			{
				_putchar((loop / 10) + '0');
			}
			_putchar((loop % 10) + '0');
		}
		_putchar('\n');
	}
}
