#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a function that creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: returns a pointer to the created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = memcpy(&dog->name, name, strlen(name) + 1);
	dog->age = age;
	dog->owner = memcpy(&dog->owner, owner, strlen(owner) + 1);

	return (dog);
}
