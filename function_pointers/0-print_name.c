#include "function_pointers.h"
/**
 * print_name - Prints a name
 *
 * @name: pointer to string
 * @f: Pointer function
 *
 * Return: N/A
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
