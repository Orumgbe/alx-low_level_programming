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

	i = islower(c);
	if (i == c)
	{
		return (1);
	}
	else if (c < 65)
	{
		return (0);
	}
	else if (c > 122)
	{
		return (0);
	}
	else if (c > 90 && c < 97)
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
