#include "main.h"

/**
*_strncat - the function concatenates strings
*@src: is another parameter of the function
*@dest: is the function parameter
*@n: is another parameter of the function
*Returns: a pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		;
	}
	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}
