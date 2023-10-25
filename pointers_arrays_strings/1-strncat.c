#include "main.h"
/**
 * _strncat - Concatenates n number of strings
 *
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: number to be determined
 *
 * Return: dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
