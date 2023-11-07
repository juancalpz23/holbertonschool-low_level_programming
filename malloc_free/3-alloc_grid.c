#include "main.h"

/**
 * alloc_grid - function to return a pointer of a 2d array
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL for failure or 0 for negative values
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width < 1)
	{
		return (NULL);
	}
	if (height < 1)
	{
		return (NULL);
	}
	ar = malloc(height * sizeof(int *));

	if (ar == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(ar[j]);
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}
	return (ar);
}
