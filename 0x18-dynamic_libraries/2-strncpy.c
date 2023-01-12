#include "main.h"
#include <string.h>
/**
 * _strncpy - function to copy a string
 * @dest: first string pointer
 * @src: second string pointer
 * @n: byte count
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
