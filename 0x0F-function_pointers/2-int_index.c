#include <stdlib.h>
/**
 * int_index - Search for an integer
 * @array: array of integers
 * @size: array size
 * @cmp: pointer to comparison function
 * Return: Index for which cmp does not return 0
 * on error, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	signed int i;

	i = 0;
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	else
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
		return (-1);
	}
}
