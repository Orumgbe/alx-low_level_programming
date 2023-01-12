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
	int l, n, i;

	l = 0;
	for (n = 0; dest[n] != '\0'; n++)
	{
		l++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
