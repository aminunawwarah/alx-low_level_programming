#include "main.h"
/**
* _memset - is the function of program
* @s: is a formal parameter
* @b: is another formal parameter
* @n: is another formal parameter
* Return: new string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		*(s + index) = b;
		index++;
	}
	return (s);
}
	