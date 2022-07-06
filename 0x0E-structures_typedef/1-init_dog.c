#include <stddef.h>
#include "dog.h"
/**
 * init_dog - Initializes struct dog data
 * @d: struct identifier
 * @name: string literal
 * @age: float parameter
 * @owner: string literal
 * Return: nothing
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
