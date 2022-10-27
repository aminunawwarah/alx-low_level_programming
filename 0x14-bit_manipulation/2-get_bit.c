#include "main.h"

/**
*get_bit - retrieves the bit value at an index
*@n: the value
*@index: the index started at 0
*Return: returns the converted value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
