#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if input is a digit
 * @c: character to be checked
 * Return: 1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
