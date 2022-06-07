#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check the code
 * @c: Character to output
 * Description: Checks if character is alphabetic
 * Return: On success, returns 1
 * On error, retrns 0
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
