#include "main.h"
/**
 * _isupper - Function to check for upper case letter
 *
 * @c: Varaible to be checked
 *
 * Return: 1 uppercase 0 otherwise
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
