#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free allocated memory
 * @d: struct pointer
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		return;
}
