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
		if (n % 2 == 0)
		{
			_putchar(str[a]);
			a++;
			m += 2;
		}
		else
		{
			_putchar(str[b]);
			b++;
			m += 2;
		}
	}
	_putchar('\n');
}
