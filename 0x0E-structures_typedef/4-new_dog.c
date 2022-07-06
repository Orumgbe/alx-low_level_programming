#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create new dog struct
 * @name: first member
 * @age: second number
 * @owner: third number
 * Return: NULL if function fails
 * new_dog data on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *data = (struct dog *)malloc(sizeof(dog_t));

	if (data == NULL)
	{
		return (NULL);
	}
	else
	{
		data->name = name;
		data->age = age;
		data->owner = owner;
		return (data);
	}
}
