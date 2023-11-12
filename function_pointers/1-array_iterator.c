#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 *
 * @array: pointer to array
 * @action: pointer to function
 * @size: size of the array
 *
 * Return: N/A
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
