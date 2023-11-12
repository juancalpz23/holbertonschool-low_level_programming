#include "function_pointers.h"
/**
 * int_index - function to search for integers
 *
 * @size: size of array
 * @array: array of integers
 * @cmp: pointer to functon that compare value
 *
 * Return: -1 Failure or index
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && size > 0 && cmp != 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
