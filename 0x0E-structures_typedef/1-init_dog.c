#include "dog.h"
#include <stddef.h>

/**
 * init_dog - a function that initialise the dog structure
 *
 * @d: a pointer to the dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

