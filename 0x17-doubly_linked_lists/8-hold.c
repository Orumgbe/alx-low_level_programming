#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
unsigned int count(dlistint_t *h);
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
	unsigned int list_len = count(*head);

	if (*head == NULL || list_len < index)
		return (-1);
	ptr = *head;
	if (ptr->next == NULL)
	{
		*head = NULL;
		free(ptr);
		return (1);
	}
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
			if (ptr->next == NULL)
			{
				ptr->prev->next = NULL;
				ptr = NULL;
			}
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
/**
 * count - determine number of element in list
 * @h: pointer to head node
 * Return: number of elements in list
 */
unsigned int count(dlistint_t *h)
{
	dlistint_t *ptr;
	unsigned int len;

	ptr = h;
	len = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
