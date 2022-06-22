#include "main.h"
/**
 * _pow_recursion - Returns value of a number to another number
 * @x: base integer
 * @y: exponent integer
 * Return: Value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
