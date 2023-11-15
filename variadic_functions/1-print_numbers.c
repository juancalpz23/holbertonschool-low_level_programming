#include "variadic_functions.h"

/**
 * print_numbers - functions that prints nmubers, followes by new line
 *
 * @separator: string to be printed between numbers
 * @n: number to be printed
 *
 * Return: N/A
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (separator != 0 && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
