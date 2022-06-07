#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Description: prints alphabets 10 times
 * Return: return nothing
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 26; b++)
		{
			_putchar(b + 97);
		}
		_putchar('\n');
	}

}
