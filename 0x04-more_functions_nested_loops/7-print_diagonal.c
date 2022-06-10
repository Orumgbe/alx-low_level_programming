#include "main.h"
/**
 * print_diagonal - draws a diagonal line "n" units long
 * @n: unit of length
 * Return: voided
 */
void print_diagonal(int n)
{
	int i;
	int s;

	i = 1;
	if (n > 0)
	{
		while (i <= n)
		{
			s = 2;
			while (s <= i)
			{
				_putchar(' ');
				s++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
