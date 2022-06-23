#include "main.h"
int prime_number_helper(int, int);
/**
 * is_prime_number - Determines prime number
 * @n: integer variable
 * Return: On success, 1
 * On failure, 0
 */
int is_prime_number(int n)
{
	return (prime_number_helper(n, 1));
}
/**
 * prime_number_helper - Helper function for prime number
 * @n: Integer variable
 * @i: Integer variable  for comparison
 * Return: Success, 1
 * failure, 0
 */
int prime_number_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	else
	{
		return (prime_number_helper(n, (i + 1)));
	}
}
