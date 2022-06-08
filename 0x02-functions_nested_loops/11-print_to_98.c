#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check the code
 * @n: Character argument
 * Description: Prints all natural numbers
 * Return: returns nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			putchar(',');
			putchar(' ');
			n++;
		}
		printf("%d", 98);
		putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d", 98);
		putchar('\n');
	}
	else
	{
		while (n > 98)
		{
			printf("%d", n);
			putchar(',');
			putchar(' ');
			n--;
		}
		printf("%d", 98);
		putchar('\n');
	}
}
