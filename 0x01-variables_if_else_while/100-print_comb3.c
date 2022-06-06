#include <stdio.h>
#include <stdlib.h>
/**
 * main - Holds the code
 * Description: Nested for loop to output two digits
 * Return: returns 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8 && j < 10)
			{
				putchar(',');
				putchar(' ');
			}	
		}
	}
	putchar('\n');
	return (0);
}
