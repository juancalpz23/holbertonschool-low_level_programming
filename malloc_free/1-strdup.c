#include "main.h"
/**
 * _strdup - Returns a pointer to a new space in memory that
 * contains a copy of string parameter
 *
 * @str: string to be copied
 *
 * Return: Pointer to duplicated string, NULL Failure
 **/
char *_strdup(char *str)
{
	int i, j;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		j++;
	}
	ar = malloc(sizeof(char) * (j + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		ar[i] = str[i];
	}
	ar[j] = '\0';

	return (ar);
}
