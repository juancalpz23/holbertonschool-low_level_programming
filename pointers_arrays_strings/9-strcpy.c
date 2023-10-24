#include "main.h"
/**
 * _strcpy - Copy from src to dest
 *
 * @dest: Destination pointer
 * @src: Source pointer
 *
 * Return: Pointer to dest
 **/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
