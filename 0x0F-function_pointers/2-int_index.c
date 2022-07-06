#include <stdlib.h>
/**
 * int_index - Search for an integer
 * @array: array of integers
 * @size: array size
 * @cmp: pointer to comparison function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for(i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		else
		{
			return (-1);
		}
	}
}
