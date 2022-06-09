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
	s = 1;
	while (i <= n)
	{
		_putchar(92);
		while (s < i)
		{
			_putchar('\n');
			s++;
		}
		i++;
	}
	_putchar('\n');
}
