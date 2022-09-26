#include "main.h"

/**
* *_strchr - is the function of program
*@*s: is a formal parameter
*@c: is another formal parameter
*Return: end of line is returned
*/
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return ('\0');
}
