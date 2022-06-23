#include "main.h"
/**
 * _sqrt_recursion - Determines natural square root of a number
 * @n: Integer variable
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	_sqrt_helper(n, 1);
}
int _sqrt_helper(int n, int i)
{
	if (n < 0)
        {
                return (-1);
        }
        else if (n - (i * i) == 0)
        {
                return(i);
        }
        else
        {
                return (_sqrt_helper(n, i + 1));
	}
}
