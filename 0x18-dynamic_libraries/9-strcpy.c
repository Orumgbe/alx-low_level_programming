#include"main.h"
/**
 * _strcpy - copies the string pointed to
 * @dest: pointer variable of copied string
 * @src: string pointed to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
	}
	return (dest);
}
