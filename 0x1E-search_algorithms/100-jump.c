#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - jump search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, idx, l_idx, r_idx;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	idx = 0;
	while (array[idx] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx = step;
		step += sqrt(size);
		if (idx >= size)
			break;
	}

	r_idx = step - sqrt(size - 1);
	l_idx = idx - sqrt(size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n",
				 l_idx, r_idx);
	while (l_idx <= fmin(r_idx, size - 1))
	{
		printf("Value checked array[%ld] = [%d]\n", l_idx, array[l_idx]);
		if (array[l_idx] == value)
			return (l_idx);
		l_idx += 1;
	}
	return (-1);
}
