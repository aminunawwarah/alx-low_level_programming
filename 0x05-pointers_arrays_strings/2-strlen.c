#include "main.h"

/**
*_stl_len -> is the main function
*@s: is the formal parameter of the function
*Return: returns an int
*/
int _strlen(char *s)
{
	int lenght;

	while (*s != '\0')
	{
		lenght += 1;
		*s = *s + 1;
	}
	return (lenght);
}
