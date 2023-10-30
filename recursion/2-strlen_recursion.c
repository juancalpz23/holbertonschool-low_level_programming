#include "main.h"
/**
 * _strlen_recursion - String length using recursion
 *
 * @s: string whose length will be found
 *
 * Return: Length
 **/
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
