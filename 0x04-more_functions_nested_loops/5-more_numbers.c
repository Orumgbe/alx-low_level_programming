#include "main.h"
/**
 * more_numbers - Prints 0 to 14, 10 times
 * Return: voided
 */
void more_numbers(void)
{
	int i;
	int l;

	l = 0;
	i = 0;
	while (l < 10)
	{
		while (i < 15)
		{
			if (i < 10)
			{
				goto unit;
				_putchar((i / 10) + '0');
unit:
				_putchar((i % 10) + '0');
				i++
			}
		}
		_putchar('\n');
		l++;
	}
}
