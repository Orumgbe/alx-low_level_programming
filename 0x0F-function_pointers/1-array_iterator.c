#include <stdlib.h>
/**
 * array_iterator - executes a function given as parameter 
 * on each elemnt of an array
 * @array: array pointer
 * @size: array size
 * @action: pointer to funtion to execute
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	n = 0;
	if (array != NULL || action != NULL)
	{
		while (n < size)
		{
			action(array[n]);
			n++;
		}
	}
	else
		return;
}
