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
	unsigned int max, count;

	if (head == NULL)
		return (NULL);
	max = listint_len(head);
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
