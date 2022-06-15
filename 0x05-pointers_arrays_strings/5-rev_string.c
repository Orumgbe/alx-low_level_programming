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

	*l = *s;
	n = strlen(l);
	m = 0;
	while (n >= 0 & m < strlen(s))
	{
		if (l[n] == '\0')
		{
			n--;
		}
		else
		{
			s[m] = l[n];
			n--;
		}
	}
}
