#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * and initializes it with a specific char
 * @size: size of array
 * @c: character argument
 * Return: NULL, if size = 0
 * on failure, pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(size * sizeof(char));
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			while (i < size)
			{
				str[i] = c;
				i++;
			}
			return (str);
		}
	}
}
