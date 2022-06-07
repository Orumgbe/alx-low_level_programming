#include "main.h"
/**
 * jack_bauer - check the code
 *
 * Description: Printing every minute of the day
 * Return: returns nothing
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++ )
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h + 48);
			_putchar(h + 48);
			_putchar(':');
			_putchar(m + 48);
			_putchar(m + 48);
		}
	}
}
