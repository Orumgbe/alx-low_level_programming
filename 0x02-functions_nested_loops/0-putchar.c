#include "main.h"
/**main - Holds source code
 * Description: Prints _putchar
 * Returns 0
 */
int main(void)
{
	char count;
	count = 0;
	while (count < 27)
	{
		_putchar(count + 65);
		count ++;
	}
	return (0);
}
