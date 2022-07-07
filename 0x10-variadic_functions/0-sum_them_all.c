#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Sums all argument parameters
 * @n: number of arguments parameters to follow
 * Return: sum
 * if no arguments are passed, 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	int sum = 0;
	int i;

	va_start(all, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
}
