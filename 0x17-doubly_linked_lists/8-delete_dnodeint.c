#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index of list
 * @head: double pointer to head
 * @index: index position to delete
 * Return: on success, 1
 * on error, -1
 */
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
		ptr = NULL;
		return (1);
	}
	while (ptr)
	{
		if (num == index)
		{
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			ptr->prev = NULL;
			ptr->next = NULL;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
		num++;
	}
	return (1);
}
