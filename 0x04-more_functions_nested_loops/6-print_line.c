#include "main.h"
/**
 * print_line - draws a straight line "n" units long
 * @n: unit of length
 * Return: voided
 */
void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
