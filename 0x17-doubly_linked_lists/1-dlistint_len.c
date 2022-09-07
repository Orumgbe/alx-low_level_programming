#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - determines number of elements in a linked list
 * @h: pointer to head node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *temp = NULL;

	if (h == NULL)
		return (num);
	temp = malloc(sizeof(dlistint_t));
	temp = h;
	while (temp)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
