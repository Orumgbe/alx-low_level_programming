#include "main.h"
/**
 * print_diagonal - draws a straight line "n" units long
 * @n: unit of length
 * Return: voided
 */
void print_diagonal(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		_putchar(92);
		i++;
	}
	_putchar('\n');
}
