#include "function_pointers.h"
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
