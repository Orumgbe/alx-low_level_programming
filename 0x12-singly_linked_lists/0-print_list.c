#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all elements of a list
 * @h: pointer to struct list_s argument
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long int count;
	const list_t *ptr;
	char *temp;

	count = 0;
	if (h == NULL)
	{
		return (count);
	}
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		temp = ptr->str;
		if (temp == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);

}
