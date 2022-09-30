#include "main.h"

/**
*_isdigit - checks if the value is a digit
*@c: is the formal parameter
*Return: 1 if the value is digit, else 0
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
