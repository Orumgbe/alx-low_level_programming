#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - finds the node at an index in doubly linked list
 * @head: pointer to head node
 * @index: position index of node
 * Return: node at index
 * NULL, if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	size_t num = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr)
	{
		if (num == index)
			return (ptr);
		ptr = ptr->next;
		num++;
	}
	return (NULL);
}
