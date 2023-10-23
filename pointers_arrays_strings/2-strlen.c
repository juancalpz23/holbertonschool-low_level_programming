#include "main.h"
/**
 * _strlen - Returns a strings length
 *
 * @s: String to determine length
 *
 * Return: S Length
 **/
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length);
}
