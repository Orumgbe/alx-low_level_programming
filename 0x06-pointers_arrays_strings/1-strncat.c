#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates two strings
 * @dest: first string pointer
 * @src: string pointer to be appended
 * @n: maximum number of bytes
 * Return: Pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
