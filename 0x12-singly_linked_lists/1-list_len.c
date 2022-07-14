#include "lists.h"
#include "stdio.h"
/**
 * list_len - Counts number of elements in linked list
 * @h: pointer to node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned long int len;
	const list_t *ptr;

	len = 0;
	if (h == NULL)
		return (len);
	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
