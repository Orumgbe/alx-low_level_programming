#include "main.h"
/**
 * reverse_array - Function to reverse an array of integers
 * @a: an array of integers
 * @n: nummber of elements to swap
 * Return: voided
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = a[n];
		n--;
	}
}
