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
	if (size > 0)
	{
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
