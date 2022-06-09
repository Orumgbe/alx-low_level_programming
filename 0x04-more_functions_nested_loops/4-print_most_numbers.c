#include "main.h"
/**
 * print_most_numbers - Prints numbers, except 2 and 4
 * Return: returns nothing
 */
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n == 2 || n == 4)
		{
			n++;
		}
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
