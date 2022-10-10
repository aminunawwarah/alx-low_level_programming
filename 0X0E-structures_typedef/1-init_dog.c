#include <stdlib.h>
#include "dog.h"

/**
*init_dog - initializes the struct elements
*@name: parameter for dog name
*age: parameter for dog age
*@owner: parameter for dog owner
*Return: returns nothing
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return;
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
}
