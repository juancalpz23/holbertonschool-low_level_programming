#include "main.h"
/**
 * _strchr - Loacates a character in a string
 *
 * @s: String to be searched
 * @c: Character we're looking for
 *
 * Return: c or NULL
 **/
char *_strchr(char *s, char c)
{
	char *ptr;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = s + i;
			return (ptr);
		}
	}
	return ('\0');
}
