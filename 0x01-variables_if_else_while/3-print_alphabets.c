#include <stdio.h>
#include <stdlib.h>
/**
 * main - Holds source code
 * Description: Prints alphabet with ascii value
 * Return: returns zero
 */
int main(void)
{
	int l, u;

	l = 97;
	u = 65;
	/**
	 *  Ascii a-z == 97 to 122
	 *  Ascii A-Z == 65 to 90
	 */
	while (l < 123)
	{
		putchar(l);
		l++;
	}
	while (u < 91)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}

