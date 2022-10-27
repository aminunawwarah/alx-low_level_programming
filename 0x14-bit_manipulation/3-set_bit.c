#include "main.h"

/**
*set_bit - sets a bit at position 1
*@n: the number
*@index: the set index
*Return: 1 on success, else -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
