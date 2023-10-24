#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints a given number of elements in
 * an array
 *
 * @a: Pointer variable
 * @n: Number of elements to be printed
 *
 **/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
