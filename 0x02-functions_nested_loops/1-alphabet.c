#include "main.h"

/**
*print_alphabet - prints with putchar
*Description: This program prints
*alphabets with putchar
*Return: 0
*/
void print_alphabet(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

	