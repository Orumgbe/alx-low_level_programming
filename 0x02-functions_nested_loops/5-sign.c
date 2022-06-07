#include "main.h"
/**
 * print_sign - check the code
 * @n: Character to check
 * Description: Checks sign of integers and prints sign
 * Return: returns 1 for positive
 * returns 0 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar('1');
		return ("-1");
	}
}
