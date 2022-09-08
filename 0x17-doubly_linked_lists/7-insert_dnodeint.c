#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head node
 * @idx: index position for new node
 * @n: data for new node
 * Return: address of new node
 * on error, NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = NULL;
	dlistint_t *new = NULL;
	unsigned int num = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	ptr = *h;
	while (ptr)
	{
		if (num == idx)
		{
			new->next = ptr;
			new->prev = ptr->prev;
			ptr->prev->next = new;
			ptr->prev = new;
			return (new);
		}
		ptr = ptr->next;
		num++;
	}
	if (num == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
