#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches string for set of characters
 * @s: string literal
 * @accept: string literal
 * Return: pointer to beginning of substring
 * on error, NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len, find = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= len)
				{
					len = j;
					find = 1;
				}
			}
		}
	}
	if (find == 1)
		return (&s[len]);
	else
		return (NULL);
	return (0);
}
