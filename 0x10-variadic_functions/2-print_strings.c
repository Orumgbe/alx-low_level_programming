#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints string
 * @separator: string between string
 * @n: number of strings passed into function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list all;
	unsigned int i;
	char *str;

	if (n == 0)
	{
		return;
	}
	else
	{
		va_start(all, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(all, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(all, char *));
			}
			if (separator != NULL && i != n - 1)
			{
				printf("%c ", *separator);
			}
		}
		va_end(all);
		putchar('\n');
	}
}