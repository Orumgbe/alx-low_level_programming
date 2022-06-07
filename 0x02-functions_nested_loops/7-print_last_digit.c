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
		if (l == INT_MIN)
		{
			return (88);
		}
		else
		{
			s = (l * -1) % 10;
			r = s + 48;
			_putchar(r);
			return (s);
		}
	}
}
