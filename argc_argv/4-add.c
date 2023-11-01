#include "main.h"
/**
 * main - adds positive numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 Success 1 Error
 **/
int main(int argc, char *argv[])
{
	int x, y, total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[x]);
	}
	printf("%d\n", total);
	return (0);
}
