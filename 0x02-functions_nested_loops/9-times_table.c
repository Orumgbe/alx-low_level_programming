#include "main.h"
#include <math.h>
/**
 * time_table - check the code
 *
 * Description: Prints timestable from 0 to 9
 * Return: returns nothing
 */
void times_table(void)
{
	int r;
	int c;
	int val;

	val = r * c;
	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			if (val < 10)
			{
				putchar(val + 48);
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar(val / 10 + 48);
				putchar(val % 10 + 48);
				putchar(',');
				putchar(' ');
			}
		}
		_putchar('\n');
	}
}
