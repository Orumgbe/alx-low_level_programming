#include <stdio.h>
#include <stdlib.h>
/**
 * main - Holds source code
 * Description: Prints unit decimals
 * Return: returns 0
 */
int main(void)
{
	char a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	a = 97;
	while (a < 103)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
