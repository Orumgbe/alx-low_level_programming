#include "main.h"
//helper function prototype name
int _sqrt_helper(int, int);
/**
 * _sqrt_recursion - Determines natural square root of a number
 * @n: Integer variable
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - Calculates the square
 * @n: base integer
 * @i: Comparing integer
 * Return: Square root value
 */
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
