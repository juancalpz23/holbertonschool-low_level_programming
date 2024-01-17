#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: Value on Success, -1 NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, i, tmp;

	low = 0;
	high = size - 1;
	tmp = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && high <= tmp)
	{
		size_t mid;

		mid = (low + high) / 2;
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
