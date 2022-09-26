#include "main.h"

/**
* *_memcpy - is the function of program
*@*dest: is a formal parameter
*@*src: is another formal parameter
*@n: is another formal parameter
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
	{
		destination[index] = source[index];
	}
	return (dest);
}
