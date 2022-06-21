#include "main.h"
#include <string.h>
/**
 * _strspn - Gets the length of a prefix substring
 * @s: string literal
 * @accept: substring
 * Return: number of bytes in substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int m;

	m = strspn(s, accept);
	return (m);
}
