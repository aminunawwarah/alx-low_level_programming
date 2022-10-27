#include "main.h"

/**
*clear_bit - clear bit
*@n: the test number
*@index: the position to be removed
*Return: 1 on success, else -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
