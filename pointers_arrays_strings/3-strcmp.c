#include "main.h"
/**
 * _strcmp - Compares two strings
 *
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: Compared strings
 **/
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}
