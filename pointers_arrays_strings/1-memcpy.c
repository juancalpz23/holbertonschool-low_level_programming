#include "main.h"
/**
 * _memcpy - Copies memory area
 *
 * @dest: Destination memory
 * @src: Source memory
 * @n: Number of bytes to be copied
 *
 * Return: dest Pointer
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
