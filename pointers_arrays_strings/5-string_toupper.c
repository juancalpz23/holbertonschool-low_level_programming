#include "main.h"
/**
 * string_toupper - Changes lower case to upper case in a string
 *
 * @str: Variable
 *
 * Return: Returns the character
 **/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
