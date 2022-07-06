#include "function_pointers.h"
#include <stdlib.h>
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
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	else
	{
		return;
	}
}