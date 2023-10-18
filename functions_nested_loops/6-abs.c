#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * @u: variable to be checked
 *
 * Return: 0 Success
 **/
int _abs(int u)
{
	if (u < 0)
	{
		return (-u);
	}
	else if (u == 0)
	{
		return (0);
	}
	else
		return (+u);
}
