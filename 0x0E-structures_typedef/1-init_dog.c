#include ‹stdlib.h>
#include "dog.h"

/**
*init_dog - initializes the variables of the struct
*@d: pointer to structure
*@name: dog name
*@age: dog age
*@owner: dog owner
*Return: returns nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
