#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees a dog struct
 *
 * @d: a pointer to the dog struct
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
