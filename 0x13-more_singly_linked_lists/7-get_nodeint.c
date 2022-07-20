#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - finds nth node of list
 * @head: pointer to first node
 * @index: node index required
 * Return: node
 * on failure, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
	listint_t *temp = NULL;
	unsigned int max, count;

	if (head == NULL)
		return (NULL);

	temp = head;
	max = 0;
	while (temp != NULL)
	{
		max++;
		temp = temp->next;
	}
	if (index >= max)
		return (NULL);
	ptr = head;
	count = 0;
	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);
		ptr = ptr->next;
		count++;
	}

}
