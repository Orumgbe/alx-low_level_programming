#include <stdio.h>
#include <stdlib.h>
/**
 * main - Holds Code
 * Description: Ascii 48 to 57 is decimal 0 to 9
 * Conditional statement in for loop
 * Return: retuns 0
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
		}
		else
		{
			putchar('\n');
		}
		putchar(' ');
	}
	return (0);
}
