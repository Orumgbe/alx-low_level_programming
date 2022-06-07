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
	if (i > 96 && i < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
