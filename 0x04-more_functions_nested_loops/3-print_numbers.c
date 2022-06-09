#include "main.h"
/**
 * print_numbers - Prints numbers from 0 to 9
 * Return: voided
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
