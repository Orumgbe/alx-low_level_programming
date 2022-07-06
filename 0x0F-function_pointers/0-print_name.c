#include "function_pointers.h"
#include <stdlib.h>
/**
 * fname- print function
 * @n: string literal
 * Return: nothing
 */
void fname(char *n)
{
	while (*n != '\0')
	{
		_putchar(*n);
		n++;
	}
	_putchar('\n');
}
/**
 * print_name - funtion that prints a name
 * @name: string literal
 * @f: function pointer with string literal parameter
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f = fname;
	f(name);
}
