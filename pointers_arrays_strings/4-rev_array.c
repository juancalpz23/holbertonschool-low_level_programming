#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: array to be reversed
 * @n: number of integrs to be reversed
 *
 * Return: Reversed array
 **/
void reverse_array(int *a, int n)
{
	int i = 0, j, tmp;

	for (j = n - 1; j > i; j--)
	{
		tmp = a[j];
		a[j] = a[i];
		a[j] = tmp;
		i++;
	}
}
