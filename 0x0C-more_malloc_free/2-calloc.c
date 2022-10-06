#include <stdlib.h>
#include "main.h"

/**
*_calloc - allocates some space in memory
*@nmemb: the memory to allocates
*@size: size of elements
*Return: returns a pointer of the allocated memory
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < (nmemb * size) index++)
	{
		p[index] = 0;
	}
	return (p);
}
