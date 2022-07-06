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
		printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);	
	}
}
