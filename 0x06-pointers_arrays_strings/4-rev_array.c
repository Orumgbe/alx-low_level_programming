#include "main.h"
/**
 * reverse_array - Function to reverse an array of integers
 * @a: an array of integers
 * @n: nummber of elements to swap
 * Return: voided
 */
void reverse_array(int *a, int n)
{
	int i, j;

	j = n - 1;
	for (i = 0; i < n; i++)
	{
		a[i] = a[j];
		j--;
	}
}
