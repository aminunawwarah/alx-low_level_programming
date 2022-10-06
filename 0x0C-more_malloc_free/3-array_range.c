#include <stdlib.h>
#include "main.h"

/**
*array_range - make array of integers
*@min: least int number
*@max: max int number
*Return: returns a pointer of the allocated memory
**/
int *array_range(int min, int max)
{
	int index, length;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	length = max - min + 1;
	a = malloc(sizeof(int) * length);
	if (a == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < length; index++, min++)
	{
		a[index] = min;
	}
	return (a);
}
