#include "main.h"
#include <ctype.h>
/**
 * cap_string - Change characters to upper
 * @c: character to switch
 * Return: characters of the string
 */
char *cap_string(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		c = toupper(c);
		i++;
	}
	return (c);
}
