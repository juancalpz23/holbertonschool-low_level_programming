#include "main.h"
/**
 * free_grid - Frees a two dimensional array
 *
 * @grid: array to be freed
 * @height: variable used to free
 *
 * Return: N/A
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
