#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add node to end of linked list
 * @head: pointer to the first node
 * @str: string literal
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	unsigned long len = 0;
	char *new;

	if (head == NULL)
		return (NULL);
	while (*str)
		len++;
	new = malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	return (*head);
}
