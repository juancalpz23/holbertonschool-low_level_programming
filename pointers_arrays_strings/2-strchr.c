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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		if (c == '\0')
		{
			return (s);
		}
	}
	return ('\0');
}
