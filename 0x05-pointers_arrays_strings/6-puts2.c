#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: string pointer variable
 * Return void
 */
void puts2(char *str)
{
	int m, n;

	m = 0;
	n = strlen(str);
	while (m < n)
	{
		_putchar(str[m]);
		m += 2;
	}
	_putchar('\n');
}
