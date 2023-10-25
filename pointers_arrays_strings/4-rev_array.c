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
	int i = 0, b, tmp;

	for (b = n - 1; b > i; b--)
	{
		tmp = a[b];
		a[b] = a[i];
		a[i] = tmp;
		i++;
	}
}
