#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses strings
 * @s: string to be reversed
 * Return: voided
 */
void rev_string(char *s)
{
	int n, m;
	char *l;

	n = strlen(s);
	m = 0;
	while (n > 0 && m < n)
	{
		s[m] = l[n];
		n--;
		m++;
	}
}
