#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - 
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

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
