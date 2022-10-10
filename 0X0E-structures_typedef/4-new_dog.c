#include <stdlib.h>
#include "dog.h"

/**
*new_dog - creates a dog struct
*@name: parameter for dog name
*age: parameter for dog age
*@owner: parameter for dog owner
*Return: returns NULL if something went wrong
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	int index, length1, length2;
	struct dog *n_dog = NULL;

	length1 = 0;
	while (name[length1] != '\0')
		length1++;
	length2 = 0;
	while (owner[length2] != '\0')
		length2++;
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(length1 + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog->age);
		free(n_dog->age);
		return (NULL);
	}
	for (index = 0; index <= length1; index++)
		n_dog->name[index] = name[index];
	for (index = 0; index <= length1; index++)
		n_dog->owner[index] = owner[index];
	n_dog->age = age;
	return (n_dog);
}
