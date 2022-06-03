#include <stdio.h>
/**
 * main - Contains code that is run
 * Description - Prints size of types
 * return - returns zero
 */
int main(void)
{
	char c;
	int i;
	long int j;
	long long int k;
	float f;
	printf("Size of a char: %lu byte\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytes\n",(unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes\n",(unsigned long)sizeof(j));
	printf("Size of a long long int: %lu bytes\n",(unsigned long)sizeof(k));
	printf("Size of a float: %lu bytes\n",(unsigned long)sizeof(f));
	return (0);
}
