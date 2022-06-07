#include "main.h"
/**
 * print_alphabet - check the code
 *
 * Description: Prints out lowercase alphabet
 * Return: returns nothing
 */
void print_alphabet(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
