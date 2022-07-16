#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees allocated memory of list
 * @head: pointer to head node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	if (head == NULL)
		return;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head->str);
		free(head);
		head = ptr;
	}
	exit(EXIT_SUCCESS);
}
