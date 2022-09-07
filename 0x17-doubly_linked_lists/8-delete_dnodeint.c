#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);
	ptr = malloc(sizeof(dlistint_t));
	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (ptr)
	{
		if (num == index)
		{
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
		num++;
	}
	return (-1);
}
