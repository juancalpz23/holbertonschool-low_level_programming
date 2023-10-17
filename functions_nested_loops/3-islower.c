#include "main.h"
/**
 * _islower - checks for lower case characters
 *@c: variable
 *
 * Return: 1 if Successful 0 otherwise
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
