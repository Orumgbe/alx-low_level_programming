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
	while (i <= n)
	{
		s = 1;
		while (s < i)
		{
			_putchar(' ');
			s++;
		}
		_putchar(92);
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
