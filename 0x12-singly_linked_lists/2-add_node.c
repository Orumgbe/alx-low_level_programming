#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add node to the beginning of linked list
 * @head: first node pointer
 * @str: string literal
 * Return: return new head node address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	unsigned long len = 0;
	char *new;

	if (head == NULL)
		return (NULL);
	while (*str)
		len++;
	new = malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);
	new = strdup(str);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	ptr->len = len;
	ptr->str = new;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
