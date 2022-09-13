#include "main.h"

/**
*print_alphabet_x10 - prints with putchar
*Description: This program prints
*some characters with putchar
*function
*Return: 0
*/
void print_alphabet_x10(void)
{
	char c;
	char i;
	
	for (i = 0; i < 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar(c);
	}
}
