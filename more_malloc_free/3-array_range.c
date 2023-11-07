#include "main.h"
/**
 * array_range - Function that creates an array of integers
 *
 * @min: minimum value
 * @max: max value
 *
 * Return: pointer to array
 **/
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));

	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; min <= max; min++, i++)
	{
		p[i] = min;
	}
	return (p);
}
