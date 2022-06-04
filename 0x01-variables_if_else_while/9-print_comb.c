#include <stdio.h>
#include <stdlib.h>
/**
 * main - Holds Code
 * Description: Ascii 48 to 57 is decimal 0 to 9
 * 		Working with a nested for loop
 * Return: retuns 0
 */
int main(void)
{
	short x, y;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			putchar(x);
			putchar(',');
			putchar(y);
			putchar(' ');
		}
	}
	return 0;
}
