#include "main.h"
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: Size of the memory
 * @c: Input character
 *
 * Return: Size of array
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return ('\0');
	}
	ar = malloc(size * sizeof(*ar));

	if (ar == '\0')
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
