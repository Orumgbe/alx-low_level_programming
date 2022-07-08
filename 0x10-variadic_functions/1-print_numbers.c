#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints integer arguments
 * @separator: string between numbers
 * @n: number of integer passed into function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list all;
	size_t i;
	unsigned int val;

	va_start(all, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(all, unsigned int);
		printf("%d", val);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(all);
}
