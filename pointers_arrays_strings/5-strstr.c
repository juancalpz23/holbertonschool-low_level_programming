#include "main.h"
/**
 * _strstr - Locates a substring
 *
 * @haystack: Array to be searched
 * @needle: String we are looking for
 *
 * Return: string pointer or null
 **/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp;

		temp = haystack;
		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (temp);
		haystack++;
	}
	return (0);
}
