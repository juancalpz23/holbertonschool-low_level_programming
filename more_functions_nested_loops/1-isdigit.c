#include "main.h"
/**
 *_isdigit - Checks 'c' to see if number
 *
 * @c: Variable to be checked
 *
 * Return: 1 Success 0 otherwise
 **/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
