#include "main.h"
#include <math.h>
/**
 * times_table - check the code
 *
 * Description: Prints timestable from 0 to 9
 * Return: returns nothing
 */
void times_table(void)
{
	int r;
	int c;
	int val;

	for (c = 0; c < 10; c++)
	{
		for (r = 0; r < 10; r++)
		{
			val = c * r;
			if (val < 10)
			{
				_putchar(val + 48);
				_putchar(',');
				_putchar(' ');
				_putchar('\n');
			}
			else
			{
				_putchar(val / 10 + 48);
				_putchar(val % 10 + 48);
				_putchar(',');
				_putchar(' ');
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
