#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of binary bits
 * Return: the converted number
 * on failure, return 0
 */
unsigned int binary_to_uint(const char *b)
{
	int bin, i;
	unsigned int dec, rem, pval;

	bin = 0;
	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		bin = bin * 10 + (b[i] - '0');
	}
	dec = 0;
	pval = 1;
	while (bin)
	{
		rem = bin % 10;
		dec = dec + (rem * pval);
		bin = bin / 10;
		pval *= 2;
	}
	return (dec);
}
