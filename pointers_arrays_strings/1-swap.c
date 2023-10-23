#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 *
 * @a: First varible to be swapped
 * @b: Second variable to be swapped
 *
 * Return: Swapped values of *a and *b
 **/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
