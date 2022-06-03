#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**main - Holds code
 * Description: Prints last digit of number stored
 * Return: returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l;
       
	l = n%10;
	printf("Last digit of %d is ", n);
	if (l > 5)
		printf("and is greater than 5\n");
	if (l == 0)
		printf("and is 0\n");
	if (l < 6)
		printf("and is less than 6 and not 0\n");
	return (0);
}
