#include "main.h"
/**
 * _strlen - function to get length of string
 * @s: string pointer variable
 * Return: returns string length
 */
int _strlen(char *s)
{
	int l;

	while (*s != '\0')
	{
		l++;
		(*s)++;
	}
	return (l);
}
