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
	unsigned int i;
	int val;

	va_start(all, n);
	if (n == 0)
	{
		va_end(all);
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			val = va_arg(all, int);
			printf("%d", val);
			if (separator != NULL && i != n - 1)
			{
				putchar(*separator);
			}
		}
		va_end(all);
		putchar('\n');
	}
}
