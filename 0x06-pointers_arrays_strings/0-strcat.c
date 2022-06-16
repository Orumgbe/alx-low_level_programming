#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenates two strings
 * @dest: first string pointer
 * @src: string pointer to be appended
 * Return: Pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int n, i;

	n = strcat(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n] = src[i];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
