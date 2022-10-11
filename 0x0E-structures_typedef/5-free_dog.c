#include ‹stdlib.h>
#include "dog.h"
/**
*free_dog - frees the dog struct
*@d: pointer to the struct
*Return: void nothing
*/
void free_dog(dog_t *d)
{
if (d == 0)
	return;
free(d->name)
free(d->owner);
free (d);
}
