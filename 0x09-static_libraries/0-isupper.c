#include "main.h"

/**
*_isupper - checks character case
*@c: is the formal parameter
*Return: 1 if the character is uppercase,
*otherwise return 0
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
