#include <stdlib.h>
#include "main.h"

/**
*malloc_checked - allocates some space in memory
*@b: the memory to allocates
*Return: returns a pointer of the allocated memory
**/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p = NULL)
	{
		exit(98);
	}
	return (p);
}
