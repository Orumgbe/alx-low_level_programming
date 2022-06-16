#include "main.h"
#include <string.h>
/**
 * string_toupper - Change lowercase characters to upper
 * @c: lowercase character to switch
 * Return: characters of the string
 */
char *string_toupper(char *c)
{
	char *up;

	up = toupper(c);
	return (up);
}
