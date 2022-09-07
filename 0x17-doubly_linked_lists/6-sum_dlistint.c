#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;
	size_t sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
