#include "main.h"
/**
 * _memcpy - Function to copy memory area
 * @dest: memory area that is copied to
 * @src: memory area to be copied from
 * @n: copied bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}
