#include "main.h"
/**
* *_memcpy - is the function of program
* @*dest: is a formal parameter
* @*src: is another formal parameter
* @n: is another formal parameter
* Return: dest is the returned value
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		*(dest + index) = *(src + index);
		index++;
	}
	return (dest);
}
