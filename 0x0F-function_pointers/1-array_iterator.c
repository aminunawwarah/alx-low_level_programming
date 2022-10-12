#include <stdio.h>

/**
*array_iterator - iterates the function
*@array: array of some elements
*@size: size of the array
*@action: funtion pointer
*Return: returns nothing
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array && size > 0 && action)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
