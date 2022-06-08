#include "main.h"
#include <math.h>
/**
 * print_last_digit - check the code
 * @l: Last digit
 * Description: Prints last digit of a number
 * Return: returns 0
 */
int print_last_digit(int l)
{
	int r;
	int s;

	if (l > 0)
	{
		s = l % 10;
		r = (l % 10) + 48;
		_putchar(r);
		return (s);
	}
	else if (l == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		s = l * -1;
		r = (s % 10) + 48;
		if (r > 48)
		{
			_putchar(r);
			return (s % 10);
		}
		else
		{
			_putchar(56);
			return (8);
		}
	}
}
