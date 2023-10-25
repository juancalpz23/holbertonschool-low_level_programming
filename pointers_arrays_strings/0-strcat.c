#include "main.h"
/**
 * _strcat - Concatenates two strings
 *
 * @dest: This will be the output
 * @src: This is the input
 *
 * Return: dest, the two strings concatenated
 **/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
