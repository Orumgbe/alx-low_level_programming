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
	if (c != i && c < 65)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
