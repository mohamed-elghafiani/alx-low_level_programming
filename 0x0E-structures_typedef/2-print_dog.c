#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: a pointer to struct dog
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == NaN)
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
	printf("Owner: %s\n", d->owner);
	}
}
