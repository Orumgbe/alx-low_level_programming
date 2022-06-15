#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses strings
 * @s: string to be reversed
 * Return: voided
 */
void rev_string(char *s)
{
	int n;

	n = strlen(s);
	while (n >= 0)
	{
		if (s[n] == '\0')
		{
			n--;
		}
		else
		{
			s[n];
			n--;
		}
	}
}
