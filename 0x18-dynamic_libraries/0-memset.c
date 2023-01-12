#include "main.h"
/**
 * _memset - Function to fill memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: first byte of memory area
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}
	return (s);
}
