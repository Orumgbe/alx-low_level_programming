#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - Prints struct members
 * @d: struct pointer
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *empty;

	*empty = "(nil)";
	if (d  != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
			printf("%s, %.1f, %s", d->name, d->age, d->owner);
		}
		if (d->age == NULL)
		{
			printf("%s, %s, %s", d->name, empty, d->owner);
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
			printf("%s, %.1f, %s", d->name, d->age, d->owner);
		}
	}
}
