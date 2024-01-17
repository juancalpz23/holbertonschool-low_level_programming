#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of integers using the Linear search algorithm
 * @array:
 * @size:
 * @value:
 * Return: Value success, -1 NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
