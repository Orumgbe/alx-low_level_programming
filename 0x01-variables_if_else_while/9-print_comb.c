#include <stdio.h>
#include <stdlib.h>
/**
 * main - Holds Code
 * Description: Ascii 48 to 57 is decimal 0 to 9
 * Working with a nested for loop
 * Return: retuns 0
 */
int main(void)
{
	short x;

	for (x = 48; x < 57; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	x = 57;
	putchar(x);
	return (0);
}
