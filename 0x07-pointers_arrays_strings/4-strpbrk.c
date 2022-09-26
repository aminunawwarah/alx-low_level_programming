#include "main.h"

/**
* *_strpbrk - is the function of program
*@*s: is a formal parameter
*@*accept: is another formal parameter
*Return: end of line
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
