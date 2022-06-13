#include "main.h"
/**
 *reset_to_98 - function to update a pointer value
 *@*n: pointer variable
 *Return: voided
 */
void reset_to_98(int *n)
{
	int p;

	*n = &p;
	p = 98;
}
