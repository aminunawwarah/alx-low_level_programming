#include "main.h"
#include <stdio.h>

/**
*_abs - prints with putchar
*Description: This program prints
*some characters with putchar
*function
*Return: 0
*/
int _abs(int c)
{
	if (c > 0 || c ==0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
