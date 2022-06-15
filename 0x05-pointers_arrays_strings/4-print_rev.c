#include "main.h"
#include <string.h>
/**
 * print_rev - Prints string in reverse
 * @s: String to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int n;

	n = strlen(s);
	while (n >= 0)
	{
		if (s[n] == '\0')
		{
			n--;
		}
		else
		{
			_putchar(s[n]);
			n--;
		}
	}
	_putchar('\n');
}
