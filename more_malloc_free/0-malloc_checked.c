#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: variable used to allocate memory
 *
 * Return: Always 0
 **/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
