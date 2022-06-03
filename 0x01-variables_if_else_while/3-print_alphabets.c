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
	 *  Ascii a-z == 97 to 123
	 *  Ascii A-Z == 65 to 90
	 */
	while (l < 123 && u < 90)
	{
		putchar(l);
		putchar(u);
		l++;
		u++;
	}
	putchar('\n');
	return (0);
}

