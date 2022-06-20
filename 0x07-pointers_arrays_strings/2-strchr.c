#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string literal
 * @c: character to be located
 * Return: pointer to first occurence of character c
 */
char *_strchr(char *s, char c)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		if(c == s[count])
		{
			return (s[count]);
			break;
		}
		else
		{
			return ('\0');
		}
		count++;
	}
}
