#include <stdio.h>
#include <stdlib.h>
/**
 * main - Holds source code
 * Description: Prints unit decimals
 * Return: returns 0
 */
int main(void)
{
	unsigned short a;

	a = 48;
	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
