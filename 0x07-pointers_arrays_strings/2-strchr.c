#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: string literal
 * @c: character to be located
 * Return: pointer to first occurence of character c
 */
char *_strchr(char *s, char c)
{
	int i, l;

	l = strlen(s);
	for (i = 0; i < l; i++)
	{
		if (c == s[i])
		{
			s += b;
			return (s);
		}
		else
		{
			return ('\0');
		}
	}
}
