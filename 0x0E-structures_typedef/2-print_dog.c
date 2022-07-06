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
	if (d  != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
			printf("%s, %.1f, %s", d->name, d->age, d->owner);
		}
		if (d->age == NULL)
		{
			printf("%s, %.1f, %s", d->name, d->age, d->owner);
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
			printf("%s, %.1f, %s", d->name, d->age, d->owner);
		}
	}
}
