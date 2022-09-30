#include <unistd.h>

/**
*_putchar - puts character to standard output
*@c: is the parameter for the character
*Return: 1 for success and 0 on error
**/
int _putchar(char c)
{
	return (write(1, &c, 1);
}

