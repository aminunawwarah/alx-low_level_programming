#include "main.h"

/**
 * get_endianness - checks for endian or little machine
 * Return: 1 if little endian, else 0
 */

int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);
}
