#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * @c: character to be tested
 * Return: 1 for uppercase
 * 0 for not uppercase
 */
int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
