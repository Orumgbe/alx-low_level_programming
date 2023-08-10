#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary representation of number using bitwise
 * @n: integer parameter
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar(49);
	else
		_putchar(48);
}
