#include "main.h"
#include <ctype.h>
/**
 * _islower - check the code
 * @c: Character to print
 * Description:
 * Return: On success, returns 1
 * On error, 0 is returned
 */
int _islower(int c)
{
	char i;

	i = tolower(c);
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
