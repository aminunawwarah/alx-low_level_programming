#include "main.h"

/**
*_isalpha - prints with putchar
*@c: is a formal parameter.
*Description: This program prints
*some characters with putchar
*function
*Return: returns 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);

	else
	{
		return (0);
	}
}
