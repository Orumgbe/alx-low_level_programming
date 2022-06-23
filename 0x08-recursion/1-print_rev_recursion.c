#include "main.h"
/**
 * _print_rev_recursion - Print reverse string
 * @s: string literal
 * Return: no value return
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
