#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees the linked list memory
 * @head: pointer to head of linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;
	ptr = head;
	while (ptr)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
