#include <stdio.h>
#include <stdlib.h>
/**
 * main - Holds source code
 * Description: Prints alphabet with ascii value
 * Return: returns zero
 */
int main(void)
{
	int l;

	l = 97;
	/* Ascii a-z == 97 to 122 */
	while (l < 123)
	{
		if (l != 101 && l != 113)
		{
			putchar(l);
			l++;
		}
		else
		{
			l++;
		}
	}
	putchar('\n');
	return (0);
}

