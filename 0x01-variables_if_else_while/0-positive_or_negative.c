#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Contains source code
 * Description: Determines whether stored number + or -
 * Return: returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
	/*Compares if number greater than zero*/
	if (n > 0)
		printf(" is positive\n");
	/*Compares if number is same as zero*/
	if (n == 0)
		printf(" is zero\n");
	/*Compares if number less than zero*/
	if (n < 0)
		printf(" is negative\n");
	return (0);
}
