#include "main.h"
/**
 * _strncpy - Copies a string
 *
 * @dest: Where the string will be copied
 * @src: The string to be copied
 * @n: Number of strings to be copied
 *
 * Return: Copied string
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
