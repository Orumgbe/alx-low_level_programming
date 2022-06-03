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

	c = 97;
	/* Ascii a-z == 97 to 123 */
	while (c < 123)
	{
		putchar(c);
		putchar('\n');
		c++;
	}
	return (0);
}
