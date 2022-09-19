#include "main.h"

/**
*_str_len -> is the main function
*@s: is the formal parameter of the function
*Return: returns an int
*/
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
