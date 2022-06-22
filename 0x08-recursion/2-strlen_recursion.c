#include "main.h"
/**
 * _strlen_recursion - Returns the length of string
 * @s: string literal
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int l;

	l = strlen(s);
	if (l == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1);
}
