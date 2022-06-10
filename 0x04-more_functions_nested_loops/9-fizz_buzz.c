#include <stdio.h>
/**
 * main - Contains the code
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && !((i % 5) == 0 && (i % 3) == 0))
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0 && !((i % 5) == 0 && (i % 3) == 0))
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		putchar(' ');
		i++;
	}
	return (0);
}
