#include "main.h"
/**main - Holds source code
 * Description: Prints _putchar
 * Returns 0
 */
int main(void)
{
	int n;
	char letters[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};

	n = 0;
	while (n < 9)
	{
		_putchar(letters[n]);
		n++;
	}
	return (0);
}
