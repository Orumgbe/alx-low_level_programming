#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - Returns the length of string
 * @s: string literal
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
