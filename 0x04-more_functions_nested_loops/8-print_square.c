#include "main.h"
/**
 * print_square - draws a square
 * @size: unit length of sides
 * Return: voided
 */
void print_square(int size)
{
	int i;
	int j;

	i = 1;
	while (i <= size)
	{
		j = i;
		while (j <= size)
		{
			_putchar(35);
			i++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}

