#include "main.h"
#include <string.h>
/**
 * string_toupper - Change lowercase characters to upper
 * @c: lowercase character to switch
 * Return: characters of the string
 */
char *string_toupper(char *c)
{
	int i, n;

	n = strlen(c);
	i = 0;
	while (i < n)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = toupper(c[i]);
			i++;
		}
	}
	return (c);
}
