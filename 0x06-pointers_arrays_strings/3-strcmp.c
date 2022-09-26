#include "main.h"

/**
*_strcmp - the function compares strings
*@s1: is the function parameter
*@s2: is another parameter of the function
*Returns: an integer
*/
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
}

