#include "main.h"

/**
*_islower - prints with putchar
*@c: is the formal parameter in the function
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