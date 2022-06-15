#include "main.h"
#include <string.h>
/**
 * puts_half - Prints half of the string
 * @str: string pointer variable
 * Return: return voided
 */
void puts_half(char *str)
{
	int a, b, m, n;

	m = 0;
	n = strlen(str);
	a = n / 2;
	b = (n - 1) / 2;
	while (*str != '\0')
	{
		if (n % 2 == 0 && a < n)
		{
			_putchar(str[a]);
			a++;
		}
		else if (n % 2 == 1 && b < n)
		{
			_putchar(str[b]);
			b++;
		}
	}
	_putchar('\n');
}
