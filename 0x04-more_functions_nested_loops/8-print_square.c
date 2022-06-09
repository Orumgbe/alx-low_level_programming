#include "main.h"
/**
 * print_square - draws a square
 * @size: unit length of sides
 * Return: voided
 */
void print_square(int size)
{
	int i;

	i = 1;
	while (i <= size)
	{
		while (i <= size)
		{
			_putchar(35);
			i++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}

