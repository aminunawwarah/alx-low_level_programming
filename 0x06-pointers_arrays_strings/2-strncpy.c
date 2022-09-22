#include "main.h"

/**
* *_strncpy - the function copies strings
*@src is the function parameter
*@n is another parameter of the function
*Returns: a pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; n > x; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
