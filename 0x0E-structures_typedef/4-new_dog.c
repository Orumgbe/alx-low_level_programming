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
	struct dog *data;
	
	data = malloc(sizeof(struct dog));
	if (data == NULL)
	{
		return (NULL);
	}
	else
	{
		data->name = name;
		data->age = age;
		data->owner = owner;
		return (0);
	}
}
