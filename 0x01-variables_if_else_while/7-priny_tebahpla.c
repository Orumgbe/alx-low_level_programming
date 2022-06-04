#include <stdio.h>
#include <stdlib.h>
/**
 * main - Holds source code
 * Description: Prints alphabet with ascii value
 * Return: returns zero
 */
int main(void)
{
	int c;

	c = 122;
	/* Ascii a-z == 97 to 123 */
	while (c > 96)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

