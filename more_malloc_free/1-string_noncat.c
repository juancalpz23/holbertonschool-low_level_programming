#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: Size of array
 *
 * Return: Null if failed or new pointer to array
 **/
char *strin+nconcat(char *s1, char *s2, unsigned it n)
{
	char *ar;
	unsigned int i, l = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}
	for (i = 0; s1[i]; i++)
	{
		l++;
	}
	ar = malloc(sizeof(char) * (l + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	l = 0;
	for (i = 0; s[i]; i++)
	{
		ar[l++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		ar[l++] = s2[i];
	}
	ar[l] = '\0';

	return (ar);
}
