#include "main.h"
/**
 * _calloc - Function allocates memory for an array using malloc
 *
 * @nmemb: number of elements
 * @size: size of memory to be allocated
 *
 * Return: N/A
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(nmemb * size);
	j = (nmemb * size);

	if (ar != NULL)
	{
		for (i = 0; i < j; i++)
		{
			ar[i] = 0;
		}
		return (ar);
	}
	else
	{
		return (NULL);
	}
}
