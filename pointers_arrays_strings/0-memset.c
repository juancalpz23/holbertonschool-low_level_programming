#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 *
 * @s: Pointer to the memory to be filled
 * @b: Constant byte to fiil the memory
 * @n: The number of byte to be filled *
 *
 * Return: Pointer to 's'
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
