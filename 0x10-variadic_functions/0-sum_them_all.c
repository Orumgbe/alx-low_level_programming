#include "stdarg.h"
/**
 * sum_them_all - Sums all argument parameters
 * @n: number of arguments parameters to follow
 * Return: sum
 * if no arguments are passed, 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int i;

	va_start(args, n);
	if (n == 0)
	{
		va_end(args);
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
