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
	dlistint_t *ptr, *temp;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		temp = ptr;
		if (ptr->next)
		{
			*head = ptr->next;
			free(temp);
			(*head)->prev = NULL;
		} else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	while (ptr)
	{
		if (num == index)
		{
			temp = ptr;
			ptr->prev->next = ptr->next;
			if (ptr->next)
				ptr->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		num++;
		ptr = ptr->next;
	}
	return (-1);
}
