#include "main.h"

/**
*flip_bits - retrieves the number of bit to flip
*@n: the start number
*@m: the end number
*Return: the bits flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
