#include "main.h"

/**
*_strcat - the function concatenates strings
*@dest: is the function parameter
*@scr: is another parameter of the function
*Returns: a dest
*/
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		;
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
