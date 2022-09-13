#include "main.h"

/**
*_islower - prints with putchar
*Description: This program prints
*some characters with putchar
*function
*Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
