#include "main.h"
/**
 * _isalpha - checks if 'c' is upper or lower case
 *
 * @c: variable 'c'
 *
 * Return: 1 Success 0 Otherwise
 **/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
