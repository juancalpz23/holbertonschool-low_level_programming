#include "main.h"
/**
 * _strpbrk - Searches a string for a set of bytes
 *
 * @s: String to be checked
 * @accept: Bytes to check
 *
 * Return: 's'
 **/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
