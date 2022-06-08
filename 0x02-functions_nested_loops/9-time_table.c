#include "main.h"
#include <math.h>
/**
 * times_table - code to be run
 *
 * Description: outputs times table to 9 times
 * Return: returns nothing
 */
void times_table(void)
{
	int i;
	int j;
	int val;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			val = i * j;
			if (val < 10)
			{
				_putchar(val + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(val / 10 + 48);
				_putchar(val % 10 + 48);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
