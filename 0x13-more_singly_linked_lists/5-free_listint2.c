#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a list, set head to null
 * @head: pointer to pointer to first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;

	if (*head == NULL)
		return;
	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
		*head = NULL;
	}
}
