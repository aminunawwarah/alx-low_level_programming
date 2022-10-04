#include <stdlib.h>
#include "main.h"

/**
*_strdup - this function returns a pointer
*@str: is a pointer to string
*Return: NULL if something went wrong
**/
char *_strdup(char *str)
{
	char *nstr;
	unsigned int length;
	unsigned int index;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	nstr = malloc(sizeof(char) * (length + 1);
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < length; index++)
	{
		nstr[index] = str[index];
	}
	nstr[length] = '\0';
	return (nstr);
}
