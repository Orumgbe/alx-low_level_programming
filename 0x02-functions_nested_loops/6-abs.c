#include "main.h"
#include <math.h>
/**
 * _abs - check the code
 * @n : integer argument
 * Description: Computes absolute value
 * Return: returns absolute value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		int m;

		m = n * -1;
		return (m);
	}
}
