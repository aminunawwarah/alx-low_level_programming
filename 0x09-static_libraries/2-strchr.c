#include "main.h"

/**
* _strchr - is the function of program
* @s: is a formal parameter
* @c: is another formal parameter
* Return: 0 is returned
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
