#include "main.h"

/**
* *string_toupper - changes text to uppercase
*@s is another parameter of the function
*Returns: the value of s
*/
char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] -= 32;
		}
	}
}
