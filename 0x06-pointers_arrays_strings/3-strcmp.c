#include "main.h"
#include <string.h>
/**
 * _strcmp - function to compare string literals
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: Integer difference
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	diff = strcmp(s1, s2);
	return (diff);
}
