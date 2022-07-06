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
			printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
		}
		else if (d->age == NULL)
		{
			printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
		}
		else if (d->owner == NULL)
		{
			d->owner = "(nil)";
			printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
		}
		else
		{
			printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);	
		}
	}
}
