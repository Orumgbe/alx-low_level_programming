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

	n = strlen(s) - 1;
	while (n >= 0)
	{
		*s = s[n];
		n--;
	}
}
