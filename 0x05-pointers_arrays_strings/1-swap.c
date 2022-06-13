#include "main.h"
/**
 * swap_int - Swaps values of two integers
 * @*a: first pointer variable
 * @*b second pointer variable
 *
 * Return: voided
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
