#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *temp = NULL;

	if (h == NULL)
		return (num);
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		num++;
		temp = temp->next;
	}
	return (num);
}
