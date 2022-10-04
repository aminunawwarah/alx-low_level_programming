#include <stdlib.h>
#include "main.h"

/**
*create_array - this function creates an array of characters
*@size: is the size of the array
*@c: is the character to initialize
*Return: NULL if something went wrong
**/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
