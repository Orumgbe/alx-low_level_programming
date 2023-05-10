#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"
/**
 * binary_search - binary search algorithm
 * @array: pointer to first element of array
 * @size: size of array
 * value: value to search for
 * Return: value index, or -1 if not found or code fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l_idx, r_idx;
	int mid;

	if (array == NULL)
		return (-1);

	l_idx = 0;
	r_idx = size - 1;

	while (l_idx <= r_idx)
	{
		printf("Searching in array: ");

		for (i = l_idx; i <= r_idx; i++)
		{
			printf("%d", array[i]);
			if (i != r_idx)
				printf(", ");
			else
				printf("\n");
		}

		mid = (l_idx + r_idx) / 2;

		if (array[mid] < value)
			l_idx = mid + 1;
		else if (array[mid] > value)
			r_idx = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
