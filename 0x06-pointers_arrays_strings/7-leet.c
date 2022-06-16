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
	char ARR[size] = {'A', 'E', 'O', 'T', 'L'};
	char arr[size] = {'a', 'e', 'o', 't', 'l'};
	char rep[size] = {'4', '3', '0', '7', '1'};

	while (c[i])
	{
		n = 0;
		while (n < size)
		{
			if (c[i] == ARR[n] || c[i] = arr[n])
			{
				c[i] = rep[n];
			}
			n++;
		}
		i++;
	}
	return (c);
}
