#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - Change characters to upper
 * @c: character to switch
 * Return: characters of the string
 */
char *cap_string(char *c)
{
	int i, n;

	n = strlen(c)
	i = 0;
	while (i < n)
	{
		c[i] = toupper(c[i]);
		i++;
	}
	return (c);
}
