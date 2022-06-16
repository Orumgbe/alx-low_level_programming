#include "main.h"
#include <string.h>
/**
 * string_toupper - Change lowercase characters to upper
 * @c: lowercase character to switch
 * Return: characters of the string
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
			i++;
		}
	}
	return (c);
}
