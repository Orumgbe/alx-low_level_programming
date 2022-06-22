#include "main.h"
/**
 * factorial - Returns factorial of a number
 * @n: integer variable
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
