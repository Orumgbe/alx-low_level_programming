#include "main.h"
/**
 * leet - Encodes string
 * @c: Character passed into function
 * Return: Encoded string
 */
char *leet(char *c)
{
	int i, n, size;

	i = 0;
	size = 5;
	char arr[5] = {'A', 'E', 'O', 'T', 'L'};
	char rep[5] = {'4', '3', '0', '7', '1'};

	while (c[i])
	{
		n = 0;

		while (n < size)
		{
			if (c[i] == arr[n] || c[i] - 32 == arr[n])
			{
				c[i] = rep[n];
			}
			n++;
		}
		i++;
	}
	return (c);
}
