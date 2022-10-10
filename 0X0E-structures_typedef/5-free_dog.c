#include <stdlib.h>
#include "dog.h"

/**
*free_dog - removes dog from the memory
*@d: a pointer to the dog struct
*Return: returns nothing
**/
void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
